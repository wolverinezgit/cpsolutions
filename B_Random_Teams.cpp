#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll solve(ll x)
{
    return (x * (x - 1)) / 2;
}
int main()
{
 fast_cin();
 ll n,m,mn=0,mx=0;
 cin >> n >> m;
 ll z = n - (m - 1);
 mx = (z*(z-1)) / 2;
 ll p = n / m;
 ll mod = n % m;

    mn = (solve(n / m) * (m-(n%m))) + (solve((n / m) + 1) * (n % m));


cout << mn << " " << mx;

 
 return 0;
}