#include<iostream>
#include<vector>
using namespace std;
int main(){
    long int n;
    cin >> n;
    vector<int>num1;
    vector<int> num2;
    long long int t = (n * (n+1))/2;
    long long int sum = 0;
    if((t & 1)==0){
        long long int m = t/2;
        for(int i=n; i>0; i--){
            if((sum + i) <= m){
                num1.push_back(i);
                sum+=i;
            }
            else {
                num2.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << num1.size() << endl;
        for(int i=0; i<num1.size(); i++){
            cout << num1[i] << " ";
        }
        cout << endl << num2.size() << endl;
        for(int i=0; i<num2.size(); i++){
            cout << num2[i] << " " ;
        }
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}