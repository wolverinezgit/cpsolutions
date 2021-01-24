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
 ll a,b,c,r1,r2,r3;
 cin >> a>>b>>c;
 r1 = sqrt((b * c) / a);
 r2 = sqrt((a * c) / b);
 r3 = sqrt((a*b) / c);
 cout << 4 * (r1 + r2 + r3);
 return 0;
}