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
#define modu 1e9 + 7

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> n;

 ll dp[n + 1] = {0};
 dp[0] = 1;
 dp[1] = 1;
 ll z = 6;
 for (i = 1; i <= min(n, z);i++)
{
    dp[i] = 1;
}
     for (i = 2; i <= n; i++)
     {

         for (j = 1; j <= 6; j++)
         {
             if (i - j > 0)
             {
                 dp[i] =(dp[i]+ dp[i - j])%(1000000007);
             }
else
{
    break;
}

         }
     }
cout << dp[n] << endl;
return 0;
}