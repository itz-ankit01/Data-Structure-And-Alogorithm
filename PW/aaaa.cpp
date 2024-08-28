#include <iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    int i=0;
	    vector <int> v;
	    v.push_back(x);
	    while(s[i] != '\0'){
	        if(s[i] == 'R'){
	            x++;
	            v.push_back(x);
	        }
	        else {
	            x--;
	            v.push_back(x);
	        }
	        i++;
	    }
	    
	    int m = v.size();
		set <int> st;
	    for(int i=0; i<m; i++){
	        st.insert(v[i]);
	    }
		cout <<st.size() << endl;
	}
	return 0;
}
