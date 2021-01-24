#include <bits/stdc++.h>
using namespace std;
    
int main()
{
long long t;
cin>>t;
while(t--)
{

long long n,i,k;
cin>>n>>k;
long long arr[n];
long long p=0,f=0,sum=0,l=-1,r=0,s=0;
for(i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
if(arr[i]%k!=0)
f=1;
}
for(i=0;i<n;i++)
{
s+=arr[i];

if(s%k)

l=max(l,max(i+1,n-(i+1)));

}
cout<<l<<endl;
}


return 0;
}