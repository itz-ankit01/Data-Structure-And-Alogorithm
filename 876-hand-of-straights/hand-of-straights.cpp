class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> mpp;
        for(auto it: hand) {
            mpp[it]++;
        }
        if(hand.size() % groupSize != 0) return false;
        
        while(!mpp.empty()) {
            int start = mpp.begin() -> first;
            for(int i = 0; i < groupSize; i++) {
                int z = start + i;
                if(mpp[z] == 0) return false;
                mpp[z]--;
                if(mpp[z] == 0) {
                    mpp.erase(z);
                }
            }
        }
        return true;
    }
};