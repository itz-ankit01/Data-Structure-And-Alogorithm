#include <iostream>
using namespace std;
// PIVOT PROBLEM

// int getPivot(int arr[], int n){
//     int s = 0, e = n-1;
//     int mid = s + ( e - s)/2;
//     while(s<e){
//         if(arr[mid] >= arr[0] ){
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + ( e - s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[5] = { 8, 10, 17, 1, 3};
//     cout << "Index of Pivot is " << getPivot(arr, 5) << endl;
//     return 0;
// }

// SEARCH IN A ROTATED SORTED ARRAY
//  YOU HAVE GIVEN AN ARRAY OF N ELEMENTS . YOU ALSO GIVEN AN INTEGER K . NOW, ARRAY IS ROTATED AT SOME PIVOT POINT UNKNOWN TO YOU . FOR EXAMPLE ARR = [1, 3, 5, 7, 8]. THEN AFTER ROTATING ARRAY AT INDEX 3 , THE ARRAY WILL BE ARR = [7, 8, 1, 3, 5]

/*
5
12 15 18 2 4
2
Index of key value is 3             */

// int getPivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }
// // SEARCHING THE KEY
// int binarySearch(int arr[], int s, int e, int key)
// {
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int indx = getPivot(arr, n);
//     int keyIdx = 0;
//     // B.S. ON SECOND LINE
//     if (arr[indx] <= key && key <= arr[n - 1])
//     {
//         keyIdx = binarySearch(arr, indx, n - 1, key);
//     }
//     // B.S. ON FIRST LINE
//     else
//     {
//         keyIdx = binarySearch(arr, 0, indx - 1, key);
//     }
//     cout << "Index of key value is " << keyIdx << endl;
//     return 0;
// }

// 
