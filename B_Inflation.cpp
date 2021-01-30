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
 cin >> t;
while(t--){
    cin >> n;
    ll k;
    cin >> k;
    ll arr[n];
    mx = 0;
    for (i = 0; i < n;i++)
        cin >> arr[i];
     ll sum = arr[0];
    for (i = 1; i < n;i++)
{
    ll x = (arr[i]*100);
  
    if (sum*k>= x)
{
    sum += (arr[i]);
    continue;
}
      
    else
    {
        ll z = x - (sum * k);
if(z%k==0)
    z = z / k;
else
{
    z = (z / k) + 1;
}

        mx = max(z, mx);
}
sum += (arr[i]);
}
cout << mx << endl;
}
 return 0;
}