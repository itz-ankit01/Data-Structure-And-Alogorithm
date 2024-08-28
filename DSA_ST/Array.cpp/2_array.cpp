#include <iostream>
using namespace std;

// LEFT ROTATE THE ARRAY BY ONE PLACE
/*
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    for(int i = 1; i< n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}     */

// LEFT ROTATE THE ARRAY BY D PLACES
// BRUTE SOLUTION
/*
    int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout << "Enter the no. of the places to rotated " << endl;
    cin >> d;

    // store
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    // shifting
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    // put back temp
    int j = 0;
    for(int i = n-d; i<n; i++){
        arr[i] = temp[j];
        j++;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}     */

// OPTIMAL SOLUTION OF PREVIOUS PROBLEM
/*
void reverse (int arr[], int n, int s, int e){

    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

    void rotate(int arr[], int n, int k){
        reverse(arr, n, 0, k-1);
        reverse(arr, n, k, n-1);
    }
    void print(int arr[], int n){
        for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        }
        cout << endl;
    }

    int main(){

        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        rotate(arr, n, k);
        reverse(arr, n, 0, n-1);
        print(arr, n);

        return 0;
    }
*/

// MOVE ALL THE ZEROES TO THE END
/*
#include<vector>
int main(){

        int n;
        cout << "Enter the size of the array " ;
        cin >> n;

        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        // step 1
        vector <int> temp;
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                temp.push_back(arr[i]);
            }
        }

        // step 2
        int nz = temp.size();
        for(int i=0; i<n; i++){
            arr[i] = temp[i];
        }

       // step 3
        for(int i = nz; i<n; i++){
            arr[i] = 0;
        }

        for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        }
        return 0;
    }  */

// OPTIMAL SOLUTION
/*
    int main(){

        int n;
        cout << "Enter the size of the array " ;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int j = -1;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                j = i;
                break;
            }
        }

        // if no non zero number
        if(j == -1){
            for(int i=0; i<n; i++){
            cout << arr[i] << " ";
            }
            cout<<endl;
        }
        // j -> always point to zero
        else {
            for(int i=j+1; i<n; i++){
                if(arr[i]!=0){
                    swap(arr[i],arr[j]);
                    j++;
                }
            }
            for(int i=0; i<n; i++){
            cout << arr[i] << " ";
            }
        }
        return 0;
    } */

// FIND UNION AND INTERSECTION OF 2 SORTED ARRAY
/*
#include<vector>
#include<set>
    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;

        vector <int> arr1(n);
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }

        int m;
        cin>>m;
        vector <int> arr2(m);
        for(int i=0; i<n; i++){
            cin >> arr2[i];
        }

        set <int> st;
        for(int i=0; i<n; i++){
            st.insert(arr1[i]);
        }

        for(int i=0; i<m; i++){
            st.insert(arr2[i]);
        }

        vector <int> temp;
        for(auto it : st){
            temp.push_back(it);
        }

        for(int i=0; i<temp.size(); i++){
            cout << temp[i] << " ";
        }
        return 0;
    }  */

// OPTIMAL SOLUTION
/*
#include <vector>
#include <set>

int main()
{

    int n;
    cout << "Enter the size of the array1 ";
    cin >> n;

    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of the array2 ";
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
               
            }
             j++;
        }
    }
    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
            i++;
        }
    }
    while (j < m)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
            j++;
        }
    }

    for (int i = 0; i < unionArr.size(); i++)
    {
        cout << unionArr[i] << " ";
    }
    return 0;
}*/

// INTERSECTION OF TWO SORTED ARRAY

#include<vector>
#include<set>

int main(){

    int n;
    cout << "Enter the size of the array " ;
    cin >> n;

    vector <int> arr1(n);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of the array " ;
    cin>>m;
    vector <int> arr2(m);
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    vector <int> ans;
    int vis[m] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i] == arr2[j] && vis[j] == 0){
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if(arr2[j] > arr1[i]) break;
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}

// MOST OPTIMAL SOLUTION
/*
    #include<vector>
    #include<set>

    int main(){

        int n;
        cout << "Enter the size of the array " ;
        cin >> n;

        vector <int> arr1(n);
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }

        int m;
        cout << "Enter the size of the array " ;
        cin>>m;
        vector <int> arr2(m);
        for(int i=0; i<n; i++){
            cin >> arr2[i];
        }

        vector <int> ans;

        int i=0;   int j=0;
        while(i<n && j<m){
            if(arr1[i] < arr2[j]){
                i++;
            }
            else if(arr2[j] < arr1[i]){
                j++;
            }
            else {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        return 0;
    }        */