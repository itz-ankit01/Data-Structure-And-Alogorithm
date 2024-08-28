

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    stack<pair<int, int>> st;
    vector<int> left;
    vector<int> right;
    int pseudo_index = -1;

    // to calculate NSL
    for (int i = 0; i < n; i++)
    {
        if (st.size() == 0)
        {
            left.push_back(pseudo_index);
        }
        else if (st.size() > 0 && st.top().first < v[i])
        {
            left.push_back(st.top().second);
        }
        else if (st.size() > 0 && st.top().first >= v[i])
        {
            while (st.size() > 0 && st.top().first >= v[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                left.push_back(pseudo_index);
            }
            else
            {
                left.push_back(st.top().second);
            }
        }
        st.push({v[i], i});
    }

    // to calculate NSR
    stack<pair<int, int>> s;
    pseudo_index = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            right.push_back(pseudo_index);
        }
        else if (s.size() > 0 && s.top().first < v[i])
        {
            right.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= v[i])
        {
            while (s.size() > 0 && s.top().first >= v[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                right.push_back(pseudo_index);
            }
            else
            {
                right.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    reverse(right.begin(), right.end());

    vector<int> width(n);

    for (int i = 0; i < left.size(); i++)
    {
        width[i] = right[i] - left[i] - 1;
    }

    vector<int> area(n);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        area[i] = v[i] * width[i];
        maxi = max(area[i], maxi);
    }

    cout << maxi << endl;

    return 0;
}