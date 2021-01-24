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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,z=0;
 cin >> n;
 ll arr[n];

 for (i = 0; i < n;i++)
     cin >> arr[i];
 map<ll, ll> m1;
 for (i = 1; i < n;i++)
{
    m1[arr[i] - arr[i - 1]]++;

}
for(auto x:m1)
{
if(m1.second>mx)
{
    mx = m1.second;

    z = m1.first;

}

}
ll f = arr[0];
ll s = arr[1];

return 0;
}