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
 double r,x1,y1,x2,y2,res;
 cin >> r >> x1 >> y1 >> x2 >> y2;
 x1 = abs(x1 - x2);
 y1 = abs(y1 - y2);
 x1 = (x1 * x1) + (y1 * y1);
 res = ceil(ceil(sqrt(x1))/(2*r));
 cout << res;
 return 0;
}