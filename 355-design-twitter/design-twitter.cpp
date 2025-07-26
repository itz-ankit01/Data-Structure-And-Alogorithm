class Twitter {
    int timer = 0;
    unordered_map<int, set<int>> user_following; // {userId, set of followers}
    unordered_map<int, vector<pair<int,int>> > tweets; // userId -> vector of (timestamp, tweetId)
    
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timer++, tweetId});
        
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        priority_queue<pair<int, int>> maxh;
        
        user_following[userId].insert(userId);
        for(auto followeeId : user_following[userId]) {
            auto &tws = tweets[followeeId];
            for(int i = max(0, (int)tws.size()-10); i < tws.size(); i++) {
                maxh.push(tws[i]);
            }
        }

        while(!maxh.empty() && ans.size() < 10) {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId != followeeId)
        user_following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followerId != followeeId)
        user_following[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */