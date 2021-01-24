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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,m;
 cin >> n >> m;
 map<ll, ll> m1;
 ll c = 0;
 ll arr[m][3];
 map<ll, ll> m2;
 for (i = 0; i < m; i++)
 {

     for (j = 0; j < 3; j++)
     {
         cin >> arr[i][j];
     }
}
         for (i = 0; i < m; i++)
         {
             vector<ll> dp(4, 1);
             for (j = 0; j < 3; j++)
             {
                 
                 if (m1.find(arr[i][j]) != m1.end())
                 {
                     flag = m1[arr[i][j]];
                     dp[m1[arr[i][j]]]--;
                     break;
                 }
             }
             for (j = 0; j < 3; j++)
             {
                 if (m1.find(arr[i][j]) != m1.end())
                 {
                     continue;
                 }
                 else
                 {
                     for (ll k = 1; k <= 3; k++)
                     {
                         if (dp[k] != 0)
                         {
                             m1[arr[i][j]] = k;
                             dp[k]--;
                             break;
                         }
                     }
                 }
             }
         }

         for (auto x : m1)
             cout << x.second << " ";

         return 0;
     }