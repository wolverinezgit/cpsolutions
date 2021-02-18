#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define v vector
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7,f=0;
     cin >> n;
     ll k;
     cin >> k;
     ll arr[n];
     vector<ll> v;
     for (i = 0; i < n;i++)
{
    cin >> arr[i];
}
ll c =0;
map<ll, ll> m1;
for (i = 0; i < n;i++)
{
    m1[arr[i]]++;
}
for(auto x:m1)
{
    c++;
}
if(c<=k)
{
    for (i = 1; i <= k - c;i++)
{
    v.pb(1);
}

for(auto x:m1)
{
    v.pb(x.first);
}
}
else
{
    f = 1;
}
if(f==0)
{
    cout << v.size() * n << endl;
    for (i = 0; i < n;i++)
{
for(ll x:v)
    cout << x << " ";
}
cout << endl;
}
else
{
    cout << -1 << endl;
}

}



 return 0;
}