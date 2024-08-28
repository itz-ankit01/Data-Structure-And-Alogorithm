#include<iostream>
#include<vector>

using namespace std;

// REARRANGE THE ARRAY BY SIGN IN ALTERNATIVE PLU MINUS SIGN BY MAKING NO CHANGE IN THE ORDER 
/*
int main(){
    
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector <int> ans(n,0);
        int posIdx = 0;
        int negIdx = 1;
        for(int i=0; i<ans.size(); i++){
            if(arr[i] > 0){
                ans[posIdx] = arr[i];
                posIdx+=2;
            }
            else{
                ans[negIdx] = arr[i];
                negIdx+=2;
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    return 0;
}  */


// REARRANGE THE ARRAY BY SIGN IN ALTERNATIVE PLU MINUS SIGN BY MAKING NO CHANGE IN THE ORDER 

int main(){
    
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector <int> ans(n,0);
        vector <int> pos, neg;
        for(int i=0; i<n; i++){
            if(arr[i] > 0){
                pos.push_back(arr[i]);
            }
            else {
                neg.push_back(arr[i]);
            }
        }

        if(pos.size() > neg.size()){
            for(int i=0; i< neg.size(); i++){
                ans[2*i] = pos[i];
                ans[2*i+1] = neg[i];
            }
            int index = 2 * neg.size();
            for(int i = neg.size(); i<pos.size(); i++){
                ans[index] = pos[i];
                index++;
            }
        }
        else {
            for(int i=0; i< pos.size(); i++){
                ans[2*i] = pos[i];
                ans[2*i+1] = neg[i];
            }
            int index = 2 * pos.size();
            for(int i = pos.size(); i<neg.size(); i++){
                ans[index] = neg[i];
                index++;
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    return 0;
}  