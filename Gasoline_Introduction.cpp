#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
ll n;
cin >> n;
ll arr[n];

for (i = 0;i<n;i++)
{
    cin >> arr[i];

}
ll sum = arrr[0];
for (i = 0; i < n; i++)
       
{

    sum += arr[i];
    sum--;
    if(sum==0)
{
    flag = 1;
    break;

}
if(n==1)
    cout << 0 << endl;

else if(flag==1)
    cout << i << endl;
else
{
    cout << sum+n-1 << endl;
}
}
flag = 0;
}
 return 0;
}