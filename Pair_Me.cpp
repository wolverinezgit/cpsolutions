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
     ll a, b, c;
     ll arr[3];
     cin >> arr[0]>>arr[1]>>arr[2];
     int f = 0;
     sort(arr, arr + 3);
if(arr[0]+arr[1]==arr[2])
     cout << "YES" << endl;
     else
     {
         cout << "NO" << endl;
     }

}


 return 0;
}