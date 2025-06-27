class Solution {
public:
    string pushDominoes(string dominoes) {
        int i = 0, j = 0;
        string ans = "";
        int n = dominoes.size();

        while(j < n) {
            if(dominoes[j] == 'R' && dominoes[i] == 'L') {
                while(i < j) {
                    ans += dominoes[i];
                    i++;
                }
            }
            else if(dominoes[j] == 'L' && dominoes[i] == '.') {
                while(i < j) {
                    ans += 'L';
                    i++;
                }
            }
            else if(dominoes[j] == 'R' && dominoes[i] == '.') {
                while(i < j) {
                    ans += dominoes[i];
                    i++;
                }
            }
            else if(dominoes[j] == 'L' && dominoes[i] == 'R') {
                int cnt = j - i - 1;
                ans += dominoes[i];
                i++;
                for(int k = 1; k <= cnt/2; k++) {
                    ans += 'R';
                }
                if(cnt%2!=0 ) ans += ".";
                for(int k=1; k <= cnt/2; k++) {
                    ans += 'L';
                }

                i += cnt;
                
            }
            else if(dominoes[i] == dominoes[j] && dominoes[i] != '.') {
                while(i<j) {
                    ans+=dominoes[j];
                    i++;
                }
            }

            j++;
        }

        if(dominoes[i] == 'L') {
            while(i < n) {
                ans+= dominoes[i];
                i++;
            }
        }else if(dominoes[i] == 'R') {
            while(i < n) {
                ans += 'R';
                i++;
            }
        }
        else {
            while(i < n) {
                ans += dominoes[i];
                i++;
            }
        }
        return ans;

    }
};