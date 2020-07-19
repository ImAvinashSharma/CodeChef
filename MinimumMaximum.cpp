#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  long long int test,n;
  
    cin>>test;
    for(long long int i=0;i<test;i++)
    { cin>>n;
      long long int a[n];
      long long int sum=0;
      
      for(int j=0;j<n;j++)
      { cin>>a[j]; 
      }
      sort(a,a+n);
       sum=a[0]*(n-1);
       cout<<sum<<endl;
    }
    return 0;
} 
