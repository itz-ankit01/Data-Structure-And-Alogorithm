#include <iostream>
using namespace std;
/*
int main()
{    // 1 2
    // 3 4
    int arr[3][3] = {{1,2,3},{2,3,4},{5,5,6}};

   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    } cout<<endl;
   }
    return 0;
}             */

/*
1 2 3
4 5 6
7 8 9    */
/*
int main()
{

    int arr[3][3];       // 9 elements

    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
    }
   }
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}
*/
/*
int main()
{  int r,c;
    cout<<"enter the no of row: ";
    cin>>r;
    cout<<"Enter the number of column: ";
    cin>>c;
    int arr[r][c]; // r*c elements

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    } 
    cout<<endl<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}        */

// INITIALISATION OF 2D ARRAY
/*
    int main(){
        int arr[][3]={1,2,3,4,3,2};
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }        */

// WRITE A PROGRAM TO STORE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX
  /*      int main(){
        int r,c;
        cout<<"enter the no of row: ";
        cin>>r;
        cout<<"Enter the number of column: ";
        cin>>c;
        int arr[r][c];
        for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        } 
        cout<<endl<<endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
        }      */

// WRITE A PROGRAM TO STORE 10 AT EVERY INDEX OF A 2D MATRIX WITH 5 ROWS AND 5 COLUMN
/*
10 10 10 10 10
10 10 10 10 10 
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10        */
/*
      int main(){
        int r,c;
        cout<<"enter the no of row: ";
        cin>>r;
        cout<<"Enter the number of column: ";
        cin>>c;
        int arr[r][c];
       
        cout<<endl<<endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            { arr[i][j]=10;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
        }   */

//  WRITE A PROGRAM TO ADD TWO MATRICES 
/*
        int main(){
        int r,c;
        cout<<"enter the no of row of first and second matrix: ";
        cin>>r;
        cout<<"Enter the number of column of first and second matrix: ";
        cin>>c;
         int arr[r][c];
          cout<<"Enter the element of first matrix: ";
         for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        } 
         int brr[r][c];
         cout<<"Enter the element of second matrix: ";
        for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++)
        { 
            cin >> brr[i][j];
        }
        } 
       
        cout<<endl<<endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            { int sum= arr[i][j] + brr[i][j];
                cout << sum << " ";
            }
            cout << endl;
        }
        return 0;
        }     */   

//  WRITE A PROGRAM TO ADD TWO MATRICES WITHOUT USING EXTRA ARRAY TO STORE THE
/*
        int main(){
        int r,c;
        cout<<"enter the no of row of first and second matrix: ";
        cin>>r;
        cout<<"Enter the number of column of first and second matrix: ";
        cin>>c;
        int arr[r][c];
        int brr[r][c];
        for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){ 
            cout<<"Enter the element of first matrix: ";
            cin >> arr[i][j];
            cout<<"Enter the element of second matrix: ";
            cin >> brr[i][j];
        }
        }
         for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++){
            brr[i][j]=arr[i][j] + brr[i][j];
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        }
          }       */

//  FIND THE SUM OF A GIVEN MATRIX OF N x M
/*
        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int sum=0;
        int arr[n][m];
         cout<<"Enter the element of first matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
           
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
        }
        cout<<"the sum of array matrix is " <<sum<<endl;
        return 0;
          }      */

// FIND OUT THE MAXIMUM AND MINIMUM ELEMENT IN A 2D ARRAY
/*
        #include<climits>
        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int min = INT_MAX;
        int max = INT_MIN;
        int index_max[2];
        int index_min[2];
        int arr[n][m];
        int i,j;
         cout<<"Enter the element of first matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
            cin >> arr[i][j];
           if(max<arr[i][j]){
             max = arr[i][j];
             index_max[0]=i;
             index_max[1]=j;
           }
           if(min>arr[i][j]){
            min = arr[i][j];
            index_min [0] = i;
             index_min [1] = j;
           }
        }
        }    
        
       cout << " The max value in given array is "<<max<<"whose index is "<<index_max[2] <<endl;
       cout << " The min value in given array is "<<min<<endl;
        return 0;
          }    */     

//  GIVEN A MATRIX A OF DIMENSION N x M AND 2 COORDINATES (L1, R1) AND (L2,R2). RETURN THE SUM OF THE RECTANGLE FROM (L2, R2)   
/*
        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int l1, r1; cin>>l1>>r1;
        int l2, r2; cin>>l2>>r2;
        int sum=0;
        int arr[n][m];
         cout<<"Enter the element of first matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
            cin >> arr[i][j];
        }
        }
         for (int i = l1; i <= l2; i++){
        for (int j = r1; j <= r2; j++){ 
           sum+=arr[i][j];
        }
        }
        cout<<"the sum of array matrix is " <<sum<<endl;
        return 0;
          }      */

// WRITE A PROGRAM TO PRINT THE ROW NUMBER HAVING THE MAXIMUM SUM IN A GIVEN MATRIX
/*
        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int arr[n][m];
        int temp, sum=0;
        int maxSumRow = 0;
         cout<<"Enter the element of matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
            cin >> arr[i][j];
           }
        }
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=0; j<m; j++){
                sum+=arr[i][j];
            }
            if(maxSumRow<sum){
                maxSumRow= sum;
                temp = i;
            }
        }
        cout<<"Max sum is "<<maxSumRow<<" and row number is "<<temp<<endl;
        return 0;
          }       */

//   GIVEN A MATRIX HAVING 0-1 ONLY, FIND THE ROW WITH THE MAXIMUM NUMBER OF 1'S
/*

        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int arr[n][m];
        int temp, cnt=0;
        int max_1_InRow = 0;
         cout<<"Enter the element of matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
            cin >> arr[i][j];
           }
        }
        for(int i=0; i<n; i++){
            cnt=0;
            for(int j=0; j<m; j++){
               if(arr[i][j]==1)cnt++;
            }
           if(max_1_InRow<cnt){
            max_1_InRow=cnt;
            temp =i;
           }
        }
       cout<<"1 occured maximum "<<max_1_InRow<<" times in row no "<<temp<<endl;
        return 0;
          }       */

// WRITE A PROGRAM TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER

/*
        int main(){
        int n,m;
        cout<<"enter the no of row of first  matrix: ";
        cin>>n;
        cout<<"Enter the number of column of first  matrix: ";
        cin>>m;
        int arr[n][m];
        int brr[m][n];
        cout<<"Enter the element of matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ 
            cin >> arr[i][j];
           }
        }
        cout<<endl<<endl;
        for (int i = 0; i < m; i++){   // change m to n and i to j
        for (int j = 0; j < n; j++){ 
        //    cout<<arr[j][i]<<" ";
        brr[i][j] = arr[j][i];     // storing the transposed array

           }
          cout<<endl;
        }
        for (int i = 0; i < m; i++){   
        for (int j = 0; j < n; j++){ 
        cout<< brr[i][j]<<" " ;
           }
          cout<<endl;
        }
        return 0;
          }    */

//  WRITE A PROGRAM TO CHANGE THE GIVEN N x N MATRIX TO ITS TRANSPOSE
/*
        int main(){
        int n;
        cout<<"enter the no of row  and column  of matrix: ";
        cin>>n;
        int arr[n][n];
        cout<<"Enter the element of matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            cin >> arr[i][j];
           }
        }
        cout<<endl<<endl;

        // transpose
        for (int i = 0; i < n; i++){   // change m to n and i to j
        for (int j = i; j < n; j++){   // j=i hoga taki double swapping n ho  // j=0; j<i; j++; it is also true
              // swap arr[i][j] and arr[j][i]
              int temp = arr[i][j];
              arr[i][j]= arr[j][i];
              arr[j][i]=temp;
           }
        }
        for (int i = 0; i < n; i++){  
        for (int j = 0; j < n; j++){ 
               cout<<arr[i][j]<<" ";
           }
          cout<<endl;
        }
        return 0;
          }     */
   
            
//  WRITE A PROGRAM TO ROTATE A MATRIX BY 90 DEGREE IN CLOCKWISE DIRECTION
/*

        int main(){
        int n;
        cout<<"enter the no of row  and column  of matrix: ";
        cin>>n;
        int arr[n][n];
        cout<<"Enter the element of matrix: ";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            cin >> arr[i][j];
           }
        }
       cout<<endl<<endl;
        

             for(int i=0; i<n; i++){   
            for (int j = i; j < n; j++){   // j=i hoga taki double swapping n ho  // j=0; j<i; j++; it is also true
              // swap arr[i][j] and arr[j][i]
              int temp = arr[i][j];
              arr[i][j]= arr[j][i];
              arr[j][i]=temp;
           }
        }
        // transpose print
         for (int i = 0; i < n; i++){  
        for (int j = 0; j < n; j++){ 
               cout<<arr[i][j]<<" ";
           }
          cout<<endl;
        }
         cout<<endl<<endl;

        // rotate
        for (int i = 0; i < n; i++){  
            int start =0, end=n;
            while(start<end){
                int temp=arr[i][start];
                arr[i][start]=arr[i][end-1];
                arr[i][end-1]=temp;
                start++;
                end--;
           }
        }
        // output
        for (int i = 0; i < n; i++){  
        for (int j = 0; j < n; j++){ 
               cout<<arr[i][j]<<" ";
           }
          cout<<endl;
        }
        return 0;
          }     */

//  WRITE A PROGRAM TO PRINT THE MULTIPLICATION OF TWO MATRICES GIVEN BY USER
/*
      int main(){
        int arr[3][2]={{1,2},{2,3},{3,4}};
        int brr[2][3]={{5,6,1},{1,3,7}};
        int res[3][3];

        // multiply
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                // i row of a[][] and j column for b[][]
                // (a[i][0],a[i][1],a[i][2].....)*(b[0][j],b[1][j],b[2][j])
                int t1, t2, k=0;
                t1=arr[i][k]*brr[k][j];
                k++;
                t2= arr[i][k]*brr[k][j];
                res[i][j]=t1+t2;
            }
        }
         for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
               
               cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
      }  */       

//  ANOTHER METHOD OF PREVIOUS QUESTION
/*
         int main(){
        int arr[3][2]={{1,2},{2,3},{3,4}};
        int brr[2][3]={{5,6,1},{1,3,7}};
        int res[3][3];
        int cr =2;
        // multiply
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                // i row of a[][] and j column for b[][]
                // (a[i][0],a[i][1],a[i][2].....)*(b[0][j],b[1][j],b[2][j])
               res[i][j]=0;
               for(int k=0; k<cr; k++){
                res[i][j]+=arr[i][k]*brr[k][j];
               }
            }
        }
         for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
               
               cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
      }     */

// User input of previous problem


        int main(){
            int m,n,p,q;
            cin>>m>>n>>p>>q;
            int arr[m][n], brr[p][q],res[m][q];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
            } cout<<endl;
             for(int i=0; i<p; i++){
                for(int j=0; j<q; j++){
                    cin>>brr[i][j];
                }
            } cout<<endl;
            int cr=n;    // common n or p
             for(int i=0; i<m; i++){
                for(int j=0; j<q; j++){
                  res[i][j]=0;
                  for(int k=0; k<cr; k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                  }
                }
            } cout<<endl;
             for(int i=0; i<m; i++){
                for(int j=0; j<q; j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            } cout<<endl;

            return 0;
        }  

//  GIVEN AN N x M MATRIX 'a' PRINT ALL THE ELEMENTS OF THE MATRIX IN THE wave form
/*
        int main(){
            int m,n;
            cin>>m>>n;
            int arr[m][n];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
            } cout<<endl;
             for(int i=0; i<m; i++){
               if(i%2==0){
                 for(int j=0; j<n; j++){
                    cout<<arr[i][j]<<" ";
                }
               }
               else {
                 for(int j=n-1; j>=0; j--){
                    cout<<arr[i][j]<<" ";
                }
               }
               cout<<endl;
            }
            return 0;
        }    */

//  GIVEN AN N x M MATRIX 'a' PRINT ALL THE ELEMENTS OF THE MATRIX IN THE WAVE PRINT 2
/*
2 3  // enter row and column of array
5 6 1  // input array
1 3 7
// output
1 5 6 3 7 1      */
/*
            int main(){
            int m,n;
            cin>>m>>n;
            int arr[m][n];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                cin>>arr[i][j];
                }
            } cout<<endl;
             for(int i=0; i<=0; i++){
                for(int j=0; j<n; j++){
                    if(j%2==0){
                    for(int i=m-1; i>=0; i--){
                        cout<<arr[i][j]<<" ";
                        }
                    }
                    else {
                        for(int i=0; i<m; i++){
                         cout<<arr[i][j]<<" ";
                        }
                    }
                }
                cout<<endl;
             }
            return 0;
        }  
*/

 
//   GIVEN AN N x M MATRIX 'a' PRINT ALL THE ELEMENTS OF THE MATRIX IN THE SPIRAL FORM
/*
        int main(){
            int m,n;
            cout<<"enter the no of rows: ";
            cin>>m;
            cout<<"enter the no of column: ";
            cin>>n;
            int arr[m][n];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
            }
            // spiral printing
            int cnt=0;
            int minr=0;
            int maxc=n-1;
            int maxr=m-1;
            int minc=0;
            int totalElements=m*n;
            while(cnt<totalElements){
                // first row printing
                for(int j=minc; j<=maxc && cnt<totalElements; j++){
                    cout<<arr[minr][j]<<" ";
                    cnt++;
                }
                minr++;
                // last column printing
                for(int i=minr; i<=maxr && cnt<totalElements;i++){
                    cout<<arr[i][maxc]<<" ";
                    cnt++;
                }
                maxc--;
                // last row printing
                for(int j=maxc; j>=minc && cnt<totalElements; j--){
                    cout<<arr[maxr][j]<<" ";
                    cnt++;
                }
                maxr--;
                // printing first column
                for(int i=maxr; i>=minr && cnt<totalElements; i--){
                    cout<<arr[i][minc]<<" ";
                    cnt++;
                }
                minc++;
            }
            return 0;
        }      */


// GIVEN A POSITIVE INTEGER N, GENERATE A N x N MATRIX FILLED WITH ELEMENTS FROM 1 TO N*N IN SPIRAL ORDER
/*
#include<stdio.h>
int main(){
    int a[3][3];
    int i,j,z=0;
    for (i=0;i<3;i++){
       a[0][i]=i+1;
    }
    for (i=0;i<3;i++){
       a[i][2]=i+3;
    }
    for (i=2;i>=0;i--){
       a[2][i]=i+3+z+z;
       z++;
    }
    for (i=0;i<2;i++){
       a[1][i]=i+8;
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
    }       */

// GIVEN A POSITIVE INTEGER N, GENERATE A N x N MATRIX FILLED WITH ELEMENTS FROM 1 TO N*N IN SPIRAL ORDER
   /*        
        int main(){
            int m,n;
            cout<<"enter the no of rows: ";
            cin>>m;
            cout<<"enter the no of column: ";
            cin>>n;
            int arr[m][n];
           
            // spiral printing
            int cnt=0;
            int minr=0;
            int maxc=n-1;
            int maxr=m-1;
            int minc=0;
            int totalElements=m*n;
            while(cnt<totalElements){
                // first row printing
                for(int j=minc; j<=maxc && cnt<totalElements; j++){
                   arr[minr][j]=cnt+1;
                    cnt++;
                }
                minr++;
                // last column printing
                for(int i=minr; i<=maxr && cnt<totalElements;i++){
                   arr[i][maxc]=cnt+1;
                    cnt++;
                }
                maxc--;
                // last row printing
                for(int j=maxc; j>=minc && cnt<totalElements; j--){
                   arr[maxr][j]=cnt+1;
                    cnt++;
                }
                maxr--;
                // printing first column
                for(int i=maxr; i>=minr && cnt<totalElements; i--){
                   arr[i][minc]=cnt+1;
                    cnt++;
                }
                minc++;}
                cout<<endl;
                for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }           
            return 0;
        }      */