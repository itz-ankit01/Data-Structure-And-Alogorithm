#include<stdio.h>


int main()
{
    int n;
    int number=0;
    int k=0;
    int m;
    int j=0;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==9)
        {
            k++;
        }
        number=number*10+arr[i];
    }
    if(n==k)
    {
        n++;
    }
    number++;
    int newnum[n];
    while(number!=0)
    {
        m=number%10;
        newnum[n-j-1]=m; j++;
        number=number/10;
    }
    printf("The output array is:");
    for(int l=0;l<n;l++)
    printf("%d ",newnum[l]);
    return 0;
}