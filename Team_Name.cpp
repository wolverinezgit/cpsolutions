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
     ll c = 0;
     map<string, ll> m1;
 
  vector<string> v;

  for (i = 0; i < n; i++)
  {
string s;
cin >> s;
v.pb(s);
m1[s]++;
}
for (i = 0; i < v.size();i++)
{
for (j = i + 1; j < v.size();j++)
{
string s1 = v[i].substr(1);
string s2 = v[j].substr(1);
s1 = v[j].substr(0, 1) + s1;
s2 = v[i].substr(0, 1) + s2;
if (m1.find(s1) == m1.end() && m1.find(s2) == m1.end())
{
    c += 2;


}
}
}
cout << c << "\n";
 }
 return 0;
}