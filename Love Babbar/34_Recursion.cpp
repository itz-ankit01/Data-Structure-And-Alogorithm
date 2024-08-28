#include<iostream>
#include<cstring>
using namespace std;

/*
// REVERSE THE STRING USING RECURSION 

void reverse(string &str, int s){
    if(s>str.length()-s-1) return ;

    char ch = str[s];
    str[s] = str[str.length()-s-1]; 
    str[str.length()-s-1] = ch;
   
    reverse(str, ++s);
    return ;
}

int main(){
 
    string str;
    cin >> str;
    reverse(str, 0);
    cout << str << endl;
    return 0;
}
*/

// CHECK PALINDROME USING RECURSION
/*
bool checkPalindrome(string str, int i, int j){
    if(i>j) return true;

    if(str[i] != str[j]) return false;

    else{
        // Recursive Call
        return checkPalindrome(str, ++i, --j);
    }
}

int main(){
    string str;
    cin >> str;

    bool ans = checkPalindrome(str, 0 , str.length()-1);
    if(ans) cout <<"Palindrome" << endl; 
    else cout << "Not a Palindrome" << endl;

    return 0;
}   */


// CALCULATE OF POWER OF ANY NUMBER;
/*
int power(int a, int b){
    if(b == 0) return 1;
    int ans = power(a, b/2);

    // if b is even
    if(b % 2 == 0){
        return  ans * ans ;
    }
    // if b is odd
    else{
       return  a * ans * ans;
    }
 
}
int main(){
    int a,b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << ans << endl;

    return 0;
}  */

// BUBBLE SORT USING RECURSION


/*
void sortArray(int *arr, int n){
    // Base Case
    if(n==0 || n==1) return ;

    // 1 case solved
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, n-1);
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sortArray(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}

*/

// SELECTION USING RECURSION
/*
void sortArray(int *arr, int n){
    // Base Case
    if(n==0 || n==1) return ;

    // 1 case solved
    int idx=-1; int mini = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < mini ){
            mini = arr[i];
            idx = i;
        }
    }
    swap(arr[0], arr[idx]);

    sortArray(arr+1, n-1);
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sortArray(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}   */