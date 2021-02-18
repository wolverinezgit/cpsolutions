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
 
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     ll k, m;
  
   cin >> n >> m >> k;
   ll arr[n];
   for (i = 0; i < n;i++)
       cin >> arr[i];
   sort(arr, arr + n, greater<ll>());
   ll sum = 0;
sum=k*arr[0];
sum += arr[1];
ll z = k + 1;
sum *= (m/z);

ll turn = m%z;

sum += (arr[0] * min(turn, k));
cout << sum << endl;

return 0;
}