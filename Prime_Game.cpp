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
 ll p,i;
 ll n = 1000000;
 vector<ll>prime(n + 1, 1);
 prime[0] = prime[1] =0;
 for ( i = 2; i <= n; i++)
 {
     if (prime[i] && (long long)i * i <= n)
     {
         for (int j = i * i; j <= n; j += i)
             prime[j] =0;
     }
 }
 for (i = 2; i <= n;i++)
{
    prime[i] = prime[i - 1] + prime[i];
}
     cin >> t;
 while (t--)
 {
     ll x, y;
     cin >> x >> y;
     if (prime[x] <= y)
         cout << "Chef"
              << "\n";
     else
     {
         cout << "Divyam"
              << "\n";
     }


}

 return 0;
}