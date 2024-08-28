#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size, window_size;
    cin >> size >> window_size;

    vector<int> v(size), temp, ans;
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    int i = 0, j = 0;
    while (j < size)
    {
        if (v[j] < 0)
            temp.push_back(v[j]);
        if (j - i + 1 < window_size)
        {
            j++;
        }
        else if (j - i + 1 == window_size)
        {
            if (temp.size() == 0)
                ans.push_back(0);
            else
            {
                ans.push_back(temp.front());
                if (v[i] == temp.front())
                    temp.erase(temp.begin());
            }
            i++;
            j++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}