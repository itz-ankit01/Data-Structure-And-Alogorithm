#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

// PERMUTATION OF A STRING

void permute(vector<vector<int>> &ans, int index, vector<int> nums){
    // Base Case
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=index; j < nums.size(); j++){
        swap(nums[index], nums[j]);
        permute(ans, index+1, nums);
        //Backtrack
        swap(nums[index], nums[j]);
    }
}
int main(){
 
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
       int num;
       cin >> num;
       nums.push_back(num);
    }
   
    vector<vector<int>> ans;
    
    int index = 0;
    permute(ans, index, nums);

    for(int i =0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}