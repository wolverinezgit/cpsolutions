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
    ll m,sum=0,c=0;
    cin >> n >> m;
    ll arr[n];
    for (i = 0; i < n;i++)
{
    cin >> arr[i];
if(arr[i]>=m)
{
    sum += arr[i] - m;
    arr[i] = m;
    c++;
}
}
sort(arr, arr + n, greater<ll>());
for (i = 0; i < n;i++)
{
if(arr[i]<m)
{
if(m-arr[i]<=sum)
    c++;
sum -= (m - arr[i]);
}
}
cout << c << "\n";
}
 return 0;
}