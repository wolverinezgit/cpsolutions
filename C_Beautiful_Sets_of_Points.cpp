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
     ll m;
     cin >> n >> m;
     cout << min(n, m) + 1 << endl;
     ll loop = min(n, m);
     i = 0;
     while (i <= m && n >= 0)
     {

         cout << n-- << " " << i << endl;
         i++;
}





 return 0;
}