#include<iostream>
#include<cstring>
using namespace std;

/*
char toLowercase(char ch){
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else {
        return ch + 32;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if((a[s] < 'a' && a[s] > 'z') || (a[s] < '0' && a[s] > '9') ){
                s++;
        }
        if((a[e] < 'a' && a[e] > 'z') || (a[e] < '0' && a[e] > '9') ){
                e--;
        }
        if(toLowercase(a[s]) != toLowercase(a[e])){
                    return 0;
                }
                else {
                    s++;
                    e--;
                }
        
    }
    return 1;
}
void reverse (char name[], int n){
    int s=0; int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){

    int count  = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}
int main(){
    
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is " << name << endl;

    int len = getLength(name);
    cout <<"Length : " << len << endl;

    reverse(name, len);
    cout << "Your name is " << name << endl;
    
    cout << "Palindrome or not " << checkPalindrome(name, len) << endl;

    cout << "CHARACTER is " << toLowercase('b') << endl;
    cout << "CHARACTER is " << toLowercase('A') << endl;

    return 0;
}          */
/*
int main(){

        char arr[] = {'a','b','\0','c','d','\0'};
        string s = {'a','b','\0','c','d','\0'};

        cout << arr << endl;
        cout << s << endl;
    return 0;
}  */

// VALID PALINDROME
// 1 faltu character hatane hain, sbb lowercase me hona chahiye, after that check palindrome
/*
char toLowercase(char ch){
    if(  (ch >='a' && ch <='z')  || (ch >='0' && ch <='9')){
        return ch;
    }
    else {
        return ch + 32;
    }
}

bool checkPalindrome(string str){
    int s = 0;
    int e = str.size()-1;
    while(s < e){
        if(str[s] != str[e]) return 0;
        else {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){
    // faltu character hatao
    string temp;
    for(int i=0; i<s.size(); i++){
        if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')  )  {
            temp.push_back(toLowercase(s[i]));
        }
    }
    return checkPalindrome(temp);
}
int main(){
        string s;
        cin >> s;
        if(isPalindrome(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    return 0;
}          */

// REVERSE WORDS IN A STRING 
// INPUT : the sky is blue
// ouput : blue is sky the

/*
int main(){
    string str;
    getline(cin, str);

    int s = 0; int e =0; 
    for(int i=0; i< str.size(); i++){
        if(str[i] == ' ' || i == str.size()-1){
            e = i-1;
            if(i == str.size()-1){
                e = i;
            }
            while(s < e){
                swap(str[s++], str[e--]);
            }
            s = i+1;
        }
    }
    cout << endl << str << endl;
    s =0; e = str.size()-1;
    while(s < e){
        swap(str[s++], str[e--]);
    }

    cout << endl << str << endl;
 
    return 0;
}          */

// REVERSE THE STRING OF ALPHANUMERIC CHARACTER AND LEFT UNDISTURB THE OTHER'S

/*

int main(){
    string str;
    getline(cin, str);
    int s = 0;
    int e = str.size()-1;
    
    while(s < e){
        if (      (  (str[s] >= 'a' && str[s] <= 'z') ||    (str[s] >= 'A' && str[s] <= 'Z') ||  (str[s] >= '0' && str[s] <= '9') )   &&    (  (str[e] >= 'a' && str[e] <= 'z') ||    (str[e] >= 'A' && str[e] <= 'Z') ||  (str[e] >= '0' && str[e] <= '9') )   ) {
            swap(str[s++], str[e--]);
        }

        if( (  (str[s] < 'a' || str[s] > 'z')  &&    (str[s] < 'A' || str[s] > 'Z') &&  (str[s] < '0' || str[s] > '9') )   ){
            s++;
        }
        if(  (  (str[e] < 'a' || str[e] > 'z')  &&    (str[e] < 'A' || str[e] > 'Z') &&  (str[e] < '0' || str[e] > '9') )  ){
            e--;
        }
    }
    cout << str << endl;
}           */

// OUTPUT THE MAXIMUM OCCURENCE OF CHARACTER IN THE STRING
/*
char getMaxOcurrCharacter(string s){
    int hash [26] = {0};
    int number = -1;

    // create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // lowercase
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        // uppercase
        else {
            number = ch - 'A';
        }
        hash[number]++;
    }
    int ans = -1, maxi = -1;

    // find maximum occurence of character
    for(int i=0; i<26; i++){
        if(hash[i] > maxi ){
            ans = i;
            maxi = hash[i];
        }
    }
    char finalAnswer = ans + 'a';
    return finalAnswer;
}
    int main(){
            string str;
            getline(cin, str);

            cout << getMaxOcurrCharacter(str) << endl;
        return 0;
    }
 */
// CUSTOM DELIMETER
/*
int main(){
    string s;
    getline(cin, s,',');   // ',' -> acting as a custom delimeter
    cout << s << endl;
}   */



// REPLACE SPACES
// YOU HAVE BEEN GIVEN A STRING 'STR' OF WORDS. YOU NEED TO REPLACE ALL THE SPACES BETWEEN WORDS WITH '@40'
/*
    int main (){
        string str;
        getline(cin, str);
        string temp = "";

        for(int i=0; i<str.length(); i++){
            if(str[i] == ' '){
                    temp.push_back('@');
                    temp.push_back('4');
                    temp.push_back('0');
            }
            else {
                    temp.push_back(str[i]);
            }
        }
        cout << temp << endl;
        return 0;
    }         */

// Replace space with @40 but without using extra spaces
/*
int main (){
        string str;
        getline(cin, str);
        
        for(int i=0; i<str.length(); i++){
            if(str[i] == ' '){
                    
            }
            else {
                    
            }
        }
       
        return 0;
    }     */


// REMOVE ALL THE OCCURENCE OF THE SUBSTRING
/*
    int main(){
        string str;
        cin >> str;
        string part;
        cin >> part;

        while(str.length() != 0 && str.find(part) < str.length()){
                str.erase(str.find(part), part.length());
        }

        cout << str << endl;
        return 0;
    }          */

// PERMUTATION OF A STRING EX -> IF ab / ba exists in eidbaooo then return true else false
/*
bool checkEqual (int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkPermutation(string s1, string s2){
        int count1[26] = {0};
        
        // character count hogya permutation wala string ka
        for(int i=0; i<s1.length(); i++){
            int index = s1[i]-'a';
            count1[index]++;
        }

        // traverse s2 string in window of size s1 length and compare
        int i=0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // running for first window
        while(i < windowSize && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }

        // check ki mila first window me ki nhin
        if( checkEqual(count1, count2)){
            return 1;  
        }
        
            // aage wale me check krenge
            while(i<s2.length()){
                int index = s2[i] - 'a';
                count2[index]++;
                
                // previous window jbb chala jo count store hua usko 0 krna hoga as it's not our answer
                char oldChar = s2[i-windowSize];
                index = oldChar - 'a';
                count2[index]--;
                i++;
                if(checkEqual(count1, count2)) {
                    return 1;   
                }
            }
            return 0;
        
}
    int main(){

        string s1;
        cin >> s1;
        string s2;
        cin >> s2;

        cout << checkPermutation(s1, s2) << endl;
        
        return 0;
    }          */

// REMOVE ALL THE ADJACENT DUPLICATE IN STRING 
// ip -> "abbaca" 
// o/p -> "ca";
/*
    int main(){

        string str;
        cin >> str;

        int i=0;
        while(i < str.length()){
            if(str[i] == str[i+1]){
                str.erase(i, 2);
                i-=2;
            }
            i++;
        }
        cout << str << endl;
        return 0;
    }    */


// STRING COMPRESSION
#include<vector>
    int main(){
        
        vector<char> str;
        char ch;

        while (cin.get(ch) && ch != '\n') {
        str.push_back(ch);
    }

        int i=0;
        int ansIndex = 0;
        int n = str.size();

        while(i < n){
            int j = i+1;
                while(j<n && str[i] == str[j]){
                    j++;
                }
                // yaha kab aaoge
                // ya to vector pura traverse krdia
                // ya fer new/Different character encounter kia

                // oldChar store kerlo
                str[ansIndex++] = str[i];

                int count = j-i;

                if(count > 1){
                    // converting counting into single digit and saving in answer
                    string cnt = to_string(count);
                    for(char ch: cnt){
                        str[ansIndex++] = ch;
                    }
                }
                // moving to new or different character
                i = j;
        }
        str[ansIndex] = '\0';
        for (char c : str) {
        cout << c;
    }
    cout << endl;
        return 0;
    }