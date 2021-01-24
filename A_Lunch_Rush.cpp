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
 ll t,i,j,n,k,flag=0,mx=-1;
 cin >> n>>k;
 vector < pair<ll, ll> > v;
 for (i = 0; i < n;i++)
{
ll p1,p2;
cin >> p1>>p2;
v.pb(mp(p1, p2));

}
for (i = 0; i < n;i++)
{
if(v[i].second>=k)
    mx = max(v[i].first - (v[i].second - k), mx);
else
{
    mx = max(mx, v[i].second);
}

}
cout << mx << endl;
return 0;
}