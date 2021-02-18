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
 ll n, m;
 cin >> n >> m;
if(n>m)
    swap(m, n);
 cout << min(n, m) * 2 << endl;
 ll j = 1;
 ll k = 1;
 for (i = 1; i <= min(n, m);i++)
{
if(k>)
    cout << j << " " << k++<< endl;
    cout << j++ << " " << k++ << endl;

}

     return 0;
}