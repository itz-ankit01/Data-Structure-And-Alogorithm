#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    int k;
    cin >> k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int maxi = INT_MIN;

    int i = 0, j = 0;
    while (j < n)
    {
        sum += num[j];
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            maxi = max(maxi, sum);
            sum -= num[i];
            i++;
            j++;
        }
    }
    cout << maxi << endl;
    return 0;
}