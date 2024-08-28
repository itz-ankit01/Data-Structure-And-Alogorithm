#include<stdio.h>
#include<string.h>

void printArray(char* arr[] , int n){
    for(int i=0; i<n; i++){
        printf("%s ",arr[i]);
    }
    printf("\n");
    printf("\n");
}

void reverseArray(char* arr[] , int n){
    char * temp;
    int j = n-1;
    for(int i=0; i<j; i++){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    for(int i=0; i<n; i++){
        printf("%s ", arr[i]);
    }
}
int main(){
    char* arr[] = {"ankit" , "is" , "a", "hardworking", "boy"};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);

    reverseArray(arr , n);
    return 0;
}