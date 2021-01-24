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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,k;
 cin >> n >> k;
ll arr[n];

for (i = 0; i < n;i++)
{
cin>>arr[i];
mx = max(mx, arr[i]);
mn = min(arr[i], mn);
}


if(k+mn<mx)
    cout << "NO";
else
{
    cout << "YES" << endl;
    for (i = 0; i < n;i++)
{
    ll z = 1;
    for (j = 1; j <= arr[i];j++)
{
    if(z>k)
        z = 1;
    cout << z++ << " ";
}
cout << endl;
}
}

return 0;
}