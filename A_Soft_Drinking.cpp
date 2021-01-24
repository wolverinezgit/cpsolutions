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
 ll n, k, l, c, d, p, nl, np;
 cin>> n>>k>>l>>c>>d>>p>>nl>>np;
 k= min(min(p / np, (k * l) / nl), c * d);
 cout << k / n;

 return 0;
}