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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,c1=0;
 cin >> t>>c1;
 map<ll, ll> m;
 map<ll, ll> m1;
 while (t--)
 {
     ll a, b, c;
     cin >> a >> b >> c;

if(m.find(a)!=m.end())
     m[a] += c;
else
{
    m[a] = c;
}
if (m.find(b+1) != m.end())
    m[b+1] -= c;
else
{
    m[b+1] = -c;
}

ll val = 0,sum=0;
auto it1=m.begin();

for (auto it = m.begin();it!=m.end();it++)
{
    it1++;
    val += (it->second);
    for (i = it->first; i < (it1)->first;i++)
{
    m1[i] = val;
}
}
for(auto x:m1)
{
if(x.second>0)
{
    sum += (min(c1, x.second));
}
}
cout << sum << "\n";
 }
return 0;
}