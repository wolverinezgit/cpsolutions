#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define v vector
#define pob pop_back
#define pf push_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
ll sum;
 cin >> n >> sum;
 ll arr[n];
 for (i = 0; i < n;i++)
cin>>arr[i];
 ll s[n+1]={0};

 
 for (i = 1; i <=n;i++)
{

s[i]=s[i-1]+arr[i-1];
}
     ll left = 1,leftv=0;
     for (i = 1;i<=n;)
{

if(s[i]-s[left-1]<=sum)
{
   
    mx = max(mx, i - (left -1));
    i++;
    
}
else
{
    left++;
}


}
         cout << mx << endl;
     return 0;
}