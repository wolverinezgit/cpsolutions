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
     ll n;
     cin >> n;
     ll i;
     ll arr[n];
     ll e = 0;
     for ( i = 0; i < n; i++)
     {
         cin >> arr[i];
     }
     for ( i = 0; i < n; i++)
     {
         if (e % 2 == 0)
         {
             if (arr[i] & 1)
                 e -= arr[i];
             else
                 e += arr[i];
         }
         else
         {
             if (arr[i] & 1)
                 e += arr[i];
             else
                 e -=arr[i];
         }
     }
     if (e& 1)
         cout << "2\n";
     else
         cout << "1\n";
 }

     return 0;
 }