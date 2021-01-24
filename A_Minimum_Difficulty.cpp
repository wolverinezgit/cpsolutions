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
 ll n,t,i,j,flag=0,mn=0,mx=1e7;
 cin >> n;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr[i];
 for (i = 1; i < n-1;i++)
{
    for (j = 0; j < n - 1;j++)
{
if(j==i)

{
if(j+1<n&&j-1>=0)
    mn = max(arr[j + 1] - arr[j-1], mn);

}
else if(j+1==i)
{
    if(j+2<n&&j>=0)
        mn = max(arr[j + 2] - arr[j],mn);
}
else
{
    mn = max(mn, arr[j + 1] - arr[j]);
}


}
mx = min(mx, mn);
mn = 0;
}
cout << mx;
return 0;
}