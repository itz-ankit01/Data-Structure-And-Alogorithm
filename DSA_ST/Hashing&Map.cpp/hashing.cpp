#include<iostream>

using namespace std;

// NUMBER HASHING
/*
int main(){
    
    int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        // precompute
        int hash[13] = {0};
        for(int i=0; i<n; i++){
            hash[arr[i]]+=1;
        }

        int t;
        cin>>t;
        while(t--){
            int number;
            cin>>number;
            // fetch
            cout <<number << "-> " << hash[number] << endl;
        }
    return 0;
}          */

// CHARACTER HASHING

#include<cstring>
    int main(){
        
        string s;
        cin >> s;

        // precompute
        int hash[26] = {0};
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }

        int t;
        cin >>t;
        while(t--){
            char c;
            cin >> c;
            // fetch
            cout << c << "-> " << hash[c-'a'] << endl;
        }

    }  

// CHARACTER HASHING FOR BOTH UPPERCASE AND LOWER CASE LETTER
/*
    #include<cstring>
    int main(){   
        string s;
        cin >> s;
        // precompute
        int hash[256] = {0};
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        int t;
        cin >>t;
        while(t--){
            char c;
            cin >> c;
            // fetch
            cout << c << "-> " << hash[c] << endl;
        }

    }      
*/
// HASHING USING MAP
/*
#include<map>
int main(){
    
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        // precompute
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]+=1;
        }

        // iterate in the map
        // for(auto it: mpp){
        //     cout << it.first << "-> " <<it.second << endl;
        // }

        int t;
        cin>>t;
        while(t--){
            int number;
            cin>>number;
            // fetch
            cout <<number << "-> " << mpp[number] << endl;
        }
    return 0;
}    

*/