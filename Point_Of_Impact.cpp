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
    ll k, x, y;
    cin >> n >> k >> x >> y;
    vector<pair<ll, ll>> xyf;
    for (i = 0; i < 4;i++)
{
    vector<pair<ll, ll>> xy;
    ll diff1 = n - x;
    ll diff2 = n - y;
if(x<=diff2)
    xy.pb(mp(0, y+x));
else
{
    xy.pb(mp(x-diff2, n));
}

if(diff1<=diff2)
{
    xy.pb(mp(n, y + diff1));
}
else
    xy.pb(mp(x+diff2, n));
if(x<=y)
{
    xy.pb(mp(0, y - x));
}
else
{
    xy.pb(mp(x - y, 0));
}
if(diff1<=y)
{

    xy.pb(mp(n, y - diff1));
}
else
{

    xy.pb(mp(x+y,0));
}
ll x1=v[0].first, y1=v[0].second;
for (i = 1; i < xy.size();i++)
{
if(
}
}
}
 return 0;
}