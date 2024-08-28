/*
#include <iostream>
using namespace std;

int main() {
	
	    long n;
	    cin>>n;
	    long arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int cnt=0;
	    for(int i=0; i<n; i++){
	       if(arr[i]%2!=0){
	           cnt++;
	       }
	    }
	    cout<<cnt<<endl;

	return 0;
}       */


// #include <iostream>
// using namespace std;
/*
int main() {
	
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	  int max=n;
	    for(int i=0; i<n; i++){
	          int cnt=0;
	       for(int j=i+1; j<n; j++){
	           if(arr[i]==arr[j]){
	               cnt++;
	           }
	       }
	       max -=cnt;
	    }
	    cout<<max<<endl;

	return 0;
}      */



/*

#include <bits/stdc++.h>
int main() {
	// your code goes here
	
	    int  n ,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	
	return 0;
} */
/*
#include <iostream>
using namespace std;
int max(int a, int b){
    if(a>b) return a; 
    else return b;
}

int min(int a, int b){
    if(a>b) return b;
    else return a;
}
int main() {
	
	    int a,b;
	    cin>>a>>b;
	    int m = min(a,b);
	    int n = max(a,b);
	    for(int i=m; i>=1; i--){
	        if(a%i==0 && b%i==0) {
				cout<<i<<" ";
				break;
			}
	        
	    }
	    for(int i=n; i<=a*b; i++){
	        if(i%a==0 && i%b==0) {
				cout<<i<<endl;
				 break;
			}
	       
	    }
	    
	
	return 0;
}           */
/*
#include<stdio.h>
int main(){
	int a=10, b= 0 , c=10;
	char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq"
	"TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
	"OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm"
	"SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
	while(a != 0){
		a = str[b++];
		while(a-- > 64){
			if(++c == 90){
				c=10;
				putchar('\n');
			}
			else {
				if(b%2==0){
					putchar('!');
				}
				else{
					putchar('  ');
				}
			}
		}
	}
	return 0;
}      */
/*

#include <iostream>
using namespace std;


int main() {	
	  int a,b;
	  cin>>a>>b;
	  bool flag = false;
	  if(a==b) {
		flag = true;
	  }
	  if(a>b){
	      for(int i=b; i<=a;  i*=2){
	          if(i==a)
	              flag=true;
	      }
	  }
	  else {
		for(int i=a; i<=b;  i*=2){
	          if(b==i)
			  flag=true;
	      }
	  }
	  if(flag==true ) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
	  
	
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=i+1;
	}
	
	for(int i=0 ,j=n-1 ; i<j; i++ , j--){
		int t1 = arr[i] + arr[j];
		int t2 = arr[i+1]  + arr [j-1];
		if(t1==t2){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			i=0,j=n-1;
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" " ;
	}

	
	return 0;
}    */

/*
#include<iostream>
using namespace std;
int prime(int n){
	int cnt=0,t;
	for(int i=2; i<=n; i++){
		if(n%i==0) {
		for(int j=1; j*j<=i*i; j++){
			if(i%j==0){
				 cnt++;
			}
		}
		if(cnt==2){
			t=i;
			return t;
		}
		}
	}
}

int main(){
	int x ,y;
	cin>>x>>y;
	
	
	int count=0;
	int sum =x;
	for(int i=x; i<=y; i++){
		if(sum<y){
			sum+=prime(sum);
			count++;
		}
		else break;
	}
	cout<<count<<endl;

	return 0;
}    */
/*
#include<iostream>
using namespace std;
int main(){
	const int city = 2;
	const int day = 4 ;
	int temp[city][day];
	for(int i=0; i<city; i++){
		for(int j=0; j<day; j++){
			cin>>temp[city][day];
		}
	}
	for(int i=0; i<city; i++){
		for(int j=0; j<day; j++){
			cout<<temp[city][day]<<" ";
		}
		cout<<endl;
	}
	return 0;
} */

// #include<iostream>
// #include<cstring>

// using namespace std;
// int main(){

// 	char str1[] = "ATTACK";
// 	//cout<<strlwr(str1)<<endl;
// 	char str2[] = " Attack";
// 	// cout<<strupr(str2)<<endl;
// 	// cout<<strcat(str1,str2)<<endl;
// 	// cout<<strncat(str1, str2, 6)<<endl;
// 	// cout<<strcpy(str1, str2)<<endl;
// 	// cout<<strncpy(str1, str2,3)<<endl;
// 	// cout<<strrev(str2)<<endl;
// 	// cout<<strset(str2,2)<<endl;

// 	return 0;
// } 

/*
#include<iostream>
#include<cstring>
void swap(int *a , int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

using namespace std;
int main(){

	int a=3, b=5;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	return 0;
}  */
/*
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
	    cin>>n;
	    int arr[n],brr[n],a=0,b=0,max=0,l;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        cin>>brr[i];
	        a+=arr[i];
	        b+=brr[i];
	        if(a>b && max<(a-b)){
	            max = a-b;
	            l = 1;
	        }
	        else max = b - a;
	        l = 2;
	    }
	    cout<<l<<" "<<max<<endl;  
    }
    return 0;
}       */
/*
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int cnt=0;
	    for(int i=n-1; i>=0; i--){
	        if(arr[i]==0) cnt++;
	        else {
	            break;
	        }
	    }
	    cout<<n-1-cnt<<endl;
	return 0;
}     */
/*
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int max = 1 , cnt = 1;
	    int value;
	    sort(arr,arr+n);
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
	    for(int i=0; i<n-1; i++){
	       if(arr[i]==arr[i+1]){
	           cnt++;
	           if(max<cnt){
	           max = cnt;
	           value = arr[i];
	       }
	       else cnt = 1;
	       
	       }
	    }
	    cout<<n-cnt<<endl;
	
	return 0;
}       */

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 3;
    int arr[] = {1, 2, 3};

    // Sort the array first, since next_permutation requires a sorted range
    sort(arr, arr + n);
	int sum = 0;
    // Generate permutations and print them out
	bool check = false;
    do {
        for (int i = 1; i < n; i++) {
            for(int i=0; i<=i; i++){
				sum+=arr[i];
			}
			if(sum/(i+1)!=0){

			}
        }
        cout << endl;
    } while (next_permutation(arr, arr + n));

    return 0;
} */
/*
#include <iostream>
#include<cstring>
using namespace std;


int main() {
	// your code goes here
	
	    int n;
	    cin>>n;
	    char arr[n];
	    cin>>arr;
		for(int i=0; i<n; i+=2){
			 if(arr[i]=='0' && arr[i+1]=='0' ) cout<<"A";
		     if(arr[i]=='0' && arr[i+1]=='1') cout<<"T";
		     if(arr[i]=='1' && arr[i+1]=='0') cout<<"C";
			 if(arr[i]=='1' && arr[i+1]=='1') cout<<"G";
		}
		cout<<endl;
	
	return 0;
}  */         
/*
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	
	    int n;
		cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    } 
	    sort(arr, arr+n);
	    int aliceSum=0, bobSum=0;
	    if(sum%2==0){
	        for(int i=n-1; i>=0; i++){
	            if(aliceSum<=bobSum){
					aliceSum+=arr[i];
				}
				else bobSum+=arr[i];
	        }
			if((aliceSum%2==0 && bobSum % 2==0) ||(aliceSum%2!=0 && bobSum%2!=0)){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
	    }
		else cout<<"NO"<<endl;
	    
	
	return 0;
}         */



#include <iostream>
using namespace std;
#include<cstring>

int main() {
	// your code goes here
	
	    int n; cin>>n;
	   char s1[n] , s2[n/2];
	   cin>>s1;
	   int k=0;
	   for(int i=n/2 ; i<n; i++){
	       s2[k] = s1[i];
	       k++;
	   }
	   s1[n/2]='\0';
	   s2[n/2]='\0';
	 if(strcmp(s1,s2)==0) cout<<"YES";
	 else cout<<"NO";
	   cout<<endl;
	
	return 0;
}
