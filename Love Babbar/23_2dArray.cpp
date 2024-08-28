#include<iostream>
#include<climits>
using namespace std;

// create a 2D ARRAY
/*
bool isPresent(int arr[][3], int target, int row, int col){
        for(int row = 0; row < 3; row++){
        for(int col =0; col < 3; col++){
            if( arr[row][col] == target){
                return 1;  
            }
        }
    }     
    return  0;
}

// to print the sum rowwise
void printSum(int arr[][3], int row, int col){
    cout << "Printing the sum -> " << endl;
        for(int row = 0; row < 3; row++){
            int sum = 0;
        for(int col =0; col < 3; col++){
          sum+=arr[row][col];
        }
        cout << sum << " ";
    }   
    cout << endl;  
}

// to print the sum ciolumn wise
void printSumColWise(int arr[][3], int row, int col){
    cout << "Printing the sum columwise -> " << endl;
        for(int col = 0; col < 3; col++){
            int sum = 0;
        for(int row =0; row < 3; row++){
          sum+=arr[row][col];
        }
        cout << sum << " ";
    }   
    cout << endl;  
}

int largestRowsum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIdx = -1;
    for(int row = 0; row < 3; row++){
            int sum = 0;
        for(int col =0; col < 3; col++){
          sum+=arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIdx = row;
        }
    }
    cout << "The maximum Sum is " << maxi << endl;  
    return rowIdx; 

}
int main(){
    
    int arr[3][3];
    // taking input -> row wise input
    
    cout <<"enter the array " << endl;
    for(int row = 0; row < 3; row++){
        for(int col =0; col < 3; col++){
            cin >> arr[row][col];
        }
    }        

    // taking input -> columnwise
   /* for(int col = 0; col < 4; col++){
        for(int row =0; row < 3; row++){
            cin >> arr[row][col];
        }
    }  */

    // print
    /*
    cout << "Printing the array " << endl;
    for(int row = 0; row < 3; row++){
        for(int col =0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }  */
    /*
    cout << "Element to be searched " << endl;
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3)){
        cout << target << "Element Found " << endl;
    }
    else {
        cout << target << "Element not found " << endl;
    }

    printSum(arr, 3, 3);
    printSumColWise(arr, 3, 3);        */

//     cout << "The row number of maximum sum is " << largestRowsum(arr, 3, 3) << endl;

    
//     return 0;
// }        */


// WAVE PRINT
/*
    int main(){
        int row, col;
        cin >> row >> col;
        int arr[row][col];

        cout <<"Enter the array " << endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin >> arr[i][j];
            }
        }
       for(int i = 0; i<col; i++){

        if(i&1){
            // odd -> Bottom to Top
            for(int j = row-1; j>=0; j--){
                cout << arr[j][i] << " ";
            }
        }
        else{
            // even -> Top to Bottom
            for(int j = 0; j<row; j++){
                cout << arr[j][i] << " ";
            }
        }
       }
        return 0;
    }          */

// SPIRAL PRINT
/*
3
3
1 2 3 4 5 6 7 8 9
1 2 3 6 9 8 7 4 5 
*/

/*
    int main(){
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }

        int startingRow = 0;
        int endingRow = m-1;
        int startingCol = 0;
        int endingCol = n-1;

        int total = m*n;
        int count = 0;
        
        while(count < total){
            // printing starting row
            for(int i = startingCol; i<= endingCol && count < total; i++){
                cout << arr[startingRow][i] << " ";
                count++;
            }
            startingRow++;

            // printing ending column
            for(int i = startingRow; i<=endingRow && count < total; i++){
                cout << arr[i][endingCol] << " ";
                count++;
            }
            endingCol--;

            // printing ending row
            for(int i = endingCol; i>=startingCol && count < total; i--){
                cout << arr[endingRow][i] << " ";
                count++;
            }
            endingRow--;

            // Printing starting column
            for(int i = endingRow; i>=startingRow && count < total; i--){
                cout << arr[i][startingCol] << " ";
                count++;
            }
            startingCol++;
        }
    }
    */

// ROTATE A 2D ARRAY BY 90 DEGREE
/*
int main(){














    return 0;
}        */

// IMPLEMENTATION OF BINARY SEARCH IN 2D ARRAY
// SEARCH 2D MATTRIX
/*
int main(){

    int m, n;
    cout << "Enter the row no and col no " << endl;
    cin >> m >> n;
    int arr[m][n];
    // input elemnt in 2d
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    int start = 0;
    int end = m * n - 1;
    int mid = (start + end)/2;

    bool flag = false;
    while(start <= end){
        int element = arr[mid/n][mid%n];
        if(element == target){
            flag = true;
            break;
        }
        if(element < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    } 
    if(flag == true) cout << "Found " << endl;
    else cout << "Not Found " << endl;

    return 0;
}      */

// SEARCH IN 2D ARRAY PART 2 ->> Array will be sorted rowwise and columnwise
/*
4
5
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
16
FOund
*/
    int main(){

    int row, col;
    cout << "Enter the row no and col no " << endl;
    cin >> row >> col;
    int arr[row][col];
    // input elemnt in 2d
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    int rowIndex = 0;
    int colIndex = col - 1;
    bool flag = false;
    while(rowIndex < row && colIndex >=0){
        int element = arr[rowIndex][colIndex];

        if(element == target){
            flag = true;
            break;
        }
        else if(element > target){
            colIndex--;
        }
        else{
            rowIndex++;
        }
    }
    if(flag == true) cout << "FOund " << endl;
    else cout << "Not Found " << endl;

    return 0;
}  