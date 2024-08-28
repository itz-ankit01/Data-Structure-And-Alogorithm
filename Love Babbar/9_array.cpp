#include <iostream>
#include <climits>
using namespace std;
/*
void getMax(int num[] , int n){
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
        }
    }
    cout<<"MAX "<<max<<endl;
    cout<<"MIN "<<min<<endl;
}
//  MAX MIN ARRAY
int main(){
   int size;
   cin>>size;

   int num[100];

   // taking an array as input
   for(int i=0; i<size; i++){
    cin>>num[i];
   }
    getMax(num,size);
    return 0;
}          */

// UPDATING AN ARRAY
/*
    void update(int arr[], int n)
{
    cout << "Inside the functions" << endl;
    //arr[0] = 120;
    arr[1] = 10;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main functions";
}
int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // printing the array
    cout << endl
         << "Printing in the main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}  */

// LINEAR SEARCH
/*
bool search(int arr[], int size, int key){
    for (int i = 0; i < 10; i++){
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}
int main(){


    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the key : ";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);

    if (found){
        cout << "Key is present" << endl;
    }
    else
        cout << "Key is not present" << endl;
}           */

// SWAPPING OF ALTERNATE NUMBER
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void alternateSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {10, 11, 12, 13, 14};
    printArray(arr, 6);
    alternateSwap(arr, 6);
    printArray(arr, 6);

    cout << endl << endl;

    printArray(brr, 5);
    alternateSwap(brr, 5);
    printArray(brr, 5);

    return 0;
}