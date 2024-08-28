#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


// SUB SEQUNECE OF STRING

void subSequence(string digits, int index, vector<string>& ans, string output, string mapping[] ){
    //Base Case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        subSequence(digits, index+1, ans, output, mapping);
        output.pop_back();
    }
}
int main(){
    string digits;
    cin >> digits;

    int index = 0;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    if(digits.length() == 0) {
        for (const string &str : ans) {
        cout << str << " ";
        }
    }
    else{
        subSequence(digits, index, ans, output, mapping);

        for (const string &str : ans) {
            cout << str << " ";
        }
    }
    
    return 0;
}