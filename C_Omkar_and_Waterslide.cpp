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
    cin >> n;
    ll arr[n];
    ll dup[n];
    ll sum = 0;
    for (i = 0; i < n;i++)
{
        cin >> arr[i];
      


}
mn = arr[0];
mx = arr[0];
for (i = 0; i < n;i++)
{
if(arr[i]>mx)
    mx = arr[i];
if(arr[i]>arr[i+1])
{
if(arr[i]<mn)
{
    sum += (mx - mn);
    mn = arr[i];

}
mn = min(mn, arr[i]);
}


}

}
    return 0;
}