#include<iostream>

using namespace std;
int main()
{ // use of for loop, while loop, do while
/*
    int n,i;
    cout<<"Enter n ";
    cin>>n;
    for(i=1; i<=n; i++){
        cout<<i<<" ";
    }     */                          
     /*  
   while(1){                // this condition will always be true so, this loop runs infinitely
        cout<<"Hello  ";
    }        */      
    /*
   int i=0;
    for(;;){
        cout<<i<<" Hello\n";
        i++;
        if(i>10)
        break;
    }    */

        // Multiplication table
     /*   
    int n, i;
    cout<<"Enter n ";
    cin>>n;
    for(i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }          */

    // Sum of n natural no
    /*
    int n, sum=0, i;
    cout<<"Enter the no ";
    cin>>n;
    for(i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"Sum of n natural no is "<<sum<<endl;           */

    // or using while loop
    /*
    int n, sum=0, i=1;
    cout<<"Enter the no ";
    cin>>n;
   while(i<=n){
    sum+=i;
    i++;
   }
    cout<<"Sum of n natural no is "<<sum<<endl;
    */

   // Factorial of any no.
   /*
    int n, prdt=1, i;
    cout<<"Enter the no ";
    cin>>n;
    for(i=1; i<=n; i++){
        prdt*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<prdt<<endl;
    */

   // Finding factors of a number
    /*
    int n, i=1;
    cout<<"Enter the no ";
    cin>>n;
    cout<<n<<" = ";
    while(i<=n){
        if(n%i==0)
        cout<<i<<" ";
        i++;
    }              */

    // Sum of factors of a no
    /*
    int n, i=1, sum=0;
    cout<<"Enter the no ";
    cin>>n;
   
    while(i<=n){
        if(n%i==0)
         sum+=i;
        i++;
    }       
     cout<<"Sum of factors of "<<n<<" = "<<sum;     */

     // Perfect no = if sum of factors of a no is equal to twice of no.
        /*
    int n, i=1, sum=0;
    cout<<"Enter the no ";
    cin>>n;
   
    while(i<=n){
        if(n%i==0)
         sum+=i;
        i++;
    }       
    if(sum==2*n){
        cout<<"Yes, "<<n<<" is a perfect no. as its sum of factor is "<<sum;
    }
    else{
         cout<<"No, "<<n<<" is not a perfect no. as its sum of factor is "<<sum;
    }           */

    // To check prime no
    /*
    int n, i, cnt=0;
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
           cnt++;
        }
    }
    if(cnt==2)
    cout<<n<<" is prime no"<<endl;
    else
    cout<<n<<" is not a prime no"<<endl;      */

    // to reverse a digit of a no
    /*
    int n;
    cout<<"Enter the no ";
    cin>>n;
    while(n>0){
        int last_digit= n%10;
        cout<<last_digit;
        n/=10;
    }            */

    // to check whether a no is palindrome or not
    /*
    int n, rev=0, temp;
    cout<<"ENter the no ";
    cin>>n;
    temp = n;
    while(n>0){
        int r = n%10;
        n/=10;
        rev = rev *10 + r;
    } 
    if(temp==rev){
        cout<<temp<<" is a palindrome no"<<endl;
    }
    else{
        cout<<temp<<" is not a palindrome no"<<endl;
    }             */

    // To check the armstrong number.... if the sum of cubes of digit of a no is equal to the no ex- 153 = 1+125+27= 153
    /*
    int n, sum=0, m;
    cout<<"Enter the no ";
    cin>>n;
    m = n;
    while(n>0){
        int rem = n%10;
        sum+= rem * rem * rem;
        n/=10;
    }
    if(sum==m){
    cout<<m<<" is a armstrong no"<<endl;
    }
    else{
    cout<<m<<" is not a armstrong no"<<endl;
    }            */

    // write the no in words
    // to do so, first we hv to reverse the no two times like 145 -> 541 again reverse and get 1 write one similarly 2 two
    /*
    int n, rev1 =0, m;
    cout<<"Enter the no ";
    cin>>n;
    while(n>0){
       int r = n%10;
        n/=10;
        rev1 = rev1 *10+r;
    }
    
    while(rev1>0){
        int r = rev1%10;
        rev1/=10;
        switch (r){
            case 0: 
            cout<<"zero ";
            break;
            case 1: 
            cout<<"one ";
            break;
             case 2:
             cout<< "two ";
            break;
             case 3:
             cout<< "three ";
            break;
             case 4:
             cout<< "four ";
            break;
             case 5:
             cout<< "five ";
            break;
             case 6: 
             cout<<"six ";
            break;
             case 7: 
             cout<<"seven ";
            break;
             case 8:
             cout<< "eight ";
            break;
             case 9:
             cout<< "nine ";
            break;
        }
        
    }            */

    // To find the GCD of 2 no
    
    int m, n;
    cout<<"Enter the 2 no ";
    cin>>m>>n;
    while(m!=n){
        if(m>n)
        m= m-n;
        else if(n>m)
        n = n-m;
    }
    cout<<m<<endl;    

    // or
    

    /*
    int m, n, ans;
    cout<<"Enter the 2 no ";
    cin>>m>>n;
    if(m<n){
    for(int i=1; i<=m; i++){
        if(n%i==0 && m%i==0){
            ans = i;
        }
    }
    }
    else if(n<m){
        for(int i=1; i<=n; i++){
        if(n%i==0 && m%i==0){
            ans =i;
        }
    }
    }              
    cout<<ans<<endl;     */
    return 0;
}