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
     vector <pair<ll,ll>> v;
     for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    v.pb(mp(p, i));

}
map<ll, ll> m1;
for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    m1[i] = p;

}
sort(v.begin(), v.end());
ll last = v[0].second;
ll c = 0;
for (i = 1; i < n;i++)
{
if(v[i].second>last)
{
    last = v[i].second;
}
else
{
    ll d1 = (last - v[i].second);

    ll d = (d1 / m1[v[i].second]) + 1;

    c += d;
    last = v[i].second + (d) * (m1[v[i].second]);
}

}
cout << c << endl;
}


 return 0;
}