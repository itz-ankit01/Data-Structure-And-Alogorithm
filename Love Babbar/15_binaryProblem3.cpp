#include<iostream>
using namespace std;

// BOOK ALLOCATION PROBLEM
// You have N books and M students. Each book has a certain number of pages, and you have to assign the books to the students such that the maximum number of pages assigned to any student is minimized. Each student must be assigned at least one book. You cannot split a book across multiple students

        bool isPossible(int arr[], int m, int n, int mid){
            int studentCount = 1;
            int pageSum = 0;
            for(int i = 0; i < n; i++){
                if(pageSum + arr[i] <= mid){
                    pageSum+=arr[i];
                }
                else{
                    studentCount++;
                    if(studentCount > m || arr[i] > mid){
                        return false;
                    }
                    pageSum = arr[i];
                }
            }
            return true;
        }
        int allocateBooks(int arr[], int n, int m){
            int s = 0;
            int sum = 0;
            int ans = -1;
            for(int i=0; i<n; i++){
                sum+=arr[i];
            }
            int e = sum;
            int mid = s + (e - s)/2;
            while(s <= e){
                    if(isPossible(arr, m, n, mid)){
                        ans = mid;
                        e = mid - 1;
                    }
                    else{
                        s = mid + 1;
                    }
                   mid = s + (e - s)/2; 
            }
            return ans;
        }
        int main(){
            int n;
            cin>>n;
            int arr[n];
            int m;
            cin>>m;
            for(int i = 0; i<n; i++){
                cin >> arr[i];
            }
            int minPage = allocateBooks(arr, n, m);
            cout << minPage <<endl;
            return 0;
        }                 


// PAINTER PARTITION PROBLEM
// You have to paint N boards of length {A0, A1, A2, ... An-1}. There are K painters available and you are also given the time it takes for a painter to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board, say board {2, 3, 4} or only board {1} or nothing but not {2, 4, 5}.

/*
        bool isPossible(int arr[], int m, int n, int mid){
            int painterCount = 1;
            int lengthOfBoard = 0;
            for(int i = 0; i < n; i++){
                if(lengthOfBoard + arr[i] <= mid){
                    lengthOfBoard+=arr[i];
                }
                else{
                    painterCount++;
                    if(painterCount > m || arr[i] > mid){
                        return false;
                    }
                    lengthOfBoard = arr[i];
                }
            }
            return true;
        }

         int paintArray(int arr[], int n, int m){
            int s = 0;
            int sum = 0;
            int ans = -1;
            for(int i=0; i<n; i++){
                sum+=arr[i];
            }
            int e = sum;
            int mid = s + (e - s)/2;
            while(s <= e){
                    if(isPossible(arr, m, n, mid)){
                        ans = mid;
                        e = mid - 1;
                    }
                    else{
                        s = mid + 1;
                    }
                   mid = s + (e - s)/2; 
            }
            return ans;
        }
      
        int main(){
            int n;
            cin>>n;
            int arr[n];
            int m;     // no of painter
            cin>>m;
            for(int i = 0; i<n; i++){
                cin >> arr[i];
            }
            int minTime = paintArray(arr, n, m);
            cout << minTime <<endl;
            return 0;
        }                 */


// AGGRESIVE COWS
// Given an array of length N , whr each element denotes the position of a stall . Now you have N stalls and an integer K which denotes the no of cows that are aggresive. To prevent the cows from hurting eachother you need to assign the cows to the stalls , such that the minimum distance between any two of them is asa large as possible. Return the largest minimum distance.

        // #include<algorithm>
        // bool isPossibleSolution(int arr[], int n, int k, int mid){
        //     int cowCount = 1;
        //     int lastPos = arr[0];

        //     for(int i = 0; i < n; i++){
        //         if(arr[i] - lastPos >= mid){
        //             cowCount++;
        //             if(cowCount == k){
        //                 return true;
        //             }
        //             lastPos = arr[i];
        //         }
        //     }
        //     return false;

        // }
        // int aggresiveCows(int arr[], int n, int k){
        //     int s = 0;
        //     int ans = -1;
        //     int maxi = -1;
        //     int mini = -1;
        //     for(int i = 0; i < n; i++){
        //             if(arr[i] > maxi){
        //                 maxi = arr[i];
        //             }
        //             if(arr[i] < mini){
        //                 mini = arr[i];
        //             }
        //     }
        //     int e = (maxi - mini);
        //     int mid = s + (e - s)/2;
        //     while(s <= e){
        //         if(isPossibleSolution(arr, n, k, mid)){
        //             ans = mid;
        //                 s = mid + 1;
        //         }
        //         else {
        //             e = mid - 1;
        //         }
        //          mid = s + (e - s)/2;
        //     }
        //     return ans;
        // }
        //     int main(){
        //     int n;
        //     cin>>n;
        //     int arr[n];
        //     int k;     // no of agressive cows
        //     cin>>k;
        //     for(int i = 0; i<n; i++){
        //         cin >> arr[i];
        //     }
        //     sort(arr, arr+n);

        //     cout << "Largest Minimum dist between two stall is " << aggresiveCows(arr, n, k) << endl;
        //         return 0;
        //     }
           