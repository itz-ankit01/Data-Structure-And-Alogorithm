class Solution {
    vector<vector<string>> ans;
    unordered_map<string, int> mpp;
    string b;
    private:
        void dfs(string word, vector<string> &seq) {
            if(word == b) {
                reverse(seq.begin(), seq.end());
                ans.push_back(seq);
                reverse(seq.begin(), seq.end());
                return;
            }

            int steps = mpp[word];

            for(int i = 0; i < word.size(); i++) {
                char original = word[i];
                for(char ch = 'a'; ch <= 'z' ; ch++) {
                    word[i] = ch;
                    if(mpp.find(word) != mpp.end() && mpp[word] == steps - 1) {
                        seq.push_back(word);
                        dfs(word, seq);
                        seq.pop_back();
                    }
                }
                word[i] = original;
            }
        }

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>> q;
        set<string> st(wordList.begin(), wordList.end());
        q.push({beginWord, 0});
        mpp[beginWord] = 0;
        b = beginWord;
        st.erase(beginWord);

        while(!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();



            for(int i = 0; i < word.size(); i++) {
                char original = word[i];

                for(char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;
                    if(st.find(word) != st.end()) {
                        st.erase(word);
                        mpp[word] = steps + 1;
                        q.push({word, steps + 1});
                    }
                }
                word[i] = original;
            }
        }

        // for(auto it: mpp) {
        //     cout << it.first << " " << it.second << endl;
        // }

        if(mpp.find(endWord) != mpp.end()) {
            vector<string> seq;
            seq.push_back(endWord);
            dfs(endWord, seq);
        }

        return ans;
    }
};