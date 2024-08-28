// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int n, b;
// 	    cin >> n >> b;
// 	    int arr[n];
// 	    vector<int>v;
// 	    for(int i=0; i<n; i++){
// 	        cin >> arr[i];
// 	        if(arr[i] >= b) v.push_back(arr[i]);
// 	    }
//         int cnt = 0;
//         for(int i=0; i<v.size(); i++){
//             if((v[i]&b)==b) cnt++;
//         }
//         if(cnt > 1) cout <<"YES" << endl;
//         else cout << "NO" << endl;
// 	}
// 	return 0;
// }





#include <iostream>
#include <vector>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, b;
	    cin >> n >> b;
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	     int cnt = 0;
         vector<int>v;
	    for(int i=0; i<n; i++){
	       if((arr[i] & b) == b){
             cnt++;
             v.push_back(arr[i]);
	    } 
           }
        
        if(cnt > 1) cout <<"YES" << endl;
        else cout << "NO" << endl;
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " " << endl;
        }
	}
	return 0;
}
