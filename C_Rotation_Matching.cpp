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
 
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     cin >> n;
     ll a1[n];
     ll a2[n];
     for (i = 0; i < n; i++)
         cin >> a1[i];
     for (i = 0; i < n; i++)
         cin >> a2[i];
     map<ll, ll> m;
     map<ll, ll> shift;
     for (i = 0; i < n; i++)
     {
         m[a1[i]] = i;
}
    for (i = 0; i < n; i++)
    {
        ll idx = m[a2[i]];
if(idx<i)
{
    ll s = n - 1 - i;
    s += (idx + 1);
    shift[s]++;
}
else
{
    shift[idx - i]++;
}

    }
  
    for (auto x : shift)
    {
        if (x.second > mx)
        {
            mx = x.second;
        }
}
cout << mx << endl;



 return 0;
}