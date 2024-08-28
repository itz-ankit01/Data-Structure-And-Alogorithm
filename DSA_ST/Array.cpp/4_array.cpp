#include<iostream>
#include<vector>
#include<map>
using namespace std;

// LONGEST SUBARRAY WITH GIVEN SUM K
/*
    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
    
        int k;
        cin >> k;

        map <long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum == k){
                maxLen = max (maxLen, i+1);
            }
            long long rem = sum - k;

    // preSumMap.find(rem) searches for the key rem in the preSumMap.
    // If rem is found in the map, it returns an iterator pointing to the element with the key rem. If not found, it returns an iterator pointing to the end of the map.

            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        cout << maxLen << endl;
    return 0;
}         
*/


// MOST OPTIMAL SOLUTION OF PREVIOUS QUESTION USING 2 POINTER APPROACH

    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
    
        long long k;
        cin >> k;

        int left = 0;
        int right = 0;
        long long sum = arr[0];
        int maxLen = 0;

       while(right < n){
            while(sum > k && left <= right){
            sum -= arr[left];
            left++;
            }
            if(sum == k) maxLen = max(maxLen, right-left+1);
            right++;
            if(right < n) sum+=arr[right];
            
       }
        cout << maxLen << endl;

        return 0;
    }    