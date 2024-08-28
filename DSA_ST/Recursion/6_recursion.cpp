#include <iostream>
#include <vector>
using namespace std;

// PRINT ALL SEQUENCES OR SUBSEQUENCES (a contigous or non  contigous, follows the order)
void printSubsequence(int *arr, int index, int n, vector<int> &ans)
{
    // Base Case
    if (index >= n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() == 0)
        {
            cout << "[]";
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence
    ans.push_back(arr[index]);
    printSubsequence(arr, index + 1, n, ans);

    // not take or not pick condition , this element is not added in your subsequences
    ans.pop_back();
    printSubsequence(arr, index + 1, n, ans);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    printSubsequence(arr, 0, n, ans);
    return 0;
}