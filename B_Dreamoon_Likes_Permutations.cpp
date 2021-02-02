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
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     cin >> n;
     multiset<ll> m1;
     map<ll, ll> m2;
     vector<pair<ll, ll>> v;
     vector<ll> v1;
     for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    v1.pb(p);
    m2[p]++;
}
for()
    m1.insert(p);
 
    if (*m1.rbegin() == m1.size()&&m2.find(p)!=m2.end()&&m2[p]==1)
    {
        v.pb(mp(i + 1, n - (i + 1)));
}
}
for(auto x:m2)
{
if(x.second>2)
{
    flag = 1;
}
}
if(flag==1)
    cout << 0 << endl;
else
{
    


cout << v.size() << endl;
for (i = 0; i < v.size();i++)
 {
     cout << v[i].first << " " << v[i].second << endl;
}
}
 }

 return 0;
}