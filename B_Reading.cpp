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
 ll t,i,n,j=0,flag=0,mx=0,mn=1e9+7;
 cin >> n >> t;
 vector<pair<ll, ll>> v;
 ll s[t] = {0};
 for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    v.pb(mp(p, i + 1));
}

sort(v.begin(), v.end());
cout << v[n - t].first << endl;

for (i = n - t; i < n;i++)
{
    s[j++]=v[i].second;
}
sort(s,s+j);
for (i = 0; i < j;i++)
    cout << s[i] << " ";
    return 0;
}