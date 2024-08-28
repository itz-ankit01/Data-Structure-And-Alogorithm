#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<long long> nums(n);
    vector<long long> prefixSum(n+1, 0);
    for(int i=0; i<n; i++){
        cin >> nums[i];
        prefixSum[i+1] = prefixSum[i] + nums[i];
    }
    for(int i = 0; i<q; i++){
        int a, b;
        cin >> a >> b;
        cout << prefixSum[b] - prefixSum[a-1] << endl;
    }
    return 0;
}