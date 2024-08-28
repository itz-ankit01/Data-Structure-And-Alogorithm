#include <bits/stdc++.h>
using namespace std;

int MAH(vector<int> v){
    
    int n = v.size();
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

    return maxi;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    for(int j=0; j<m; j++){
        v.push_back(arr[0][j]);
    }

    int maxi = MAH(v);

    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0){
                v[j] = 0;
            } else {
                v[j] = arr[i][j] + v[j];
            }
        }
        maxi = max(maxi, MAH(v));
    }

    cout << maxi << endl;
    return 0;
}