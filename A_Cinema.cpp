#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
#define v vector
#define pob pop_back
#define pf push_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,n,m,k,j,flag=0,mx=0,mn=1e9+7;
 cin >> n >> m >> k;
 ll arr[n][m];
 for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
        arr[i][j] = 0;
}
while(k--)
{
    ll x,y;
    cin >> x >> y;
if(arr[x-1][y-1]==0)
    arr[x - 1][y - 1] = 1;
else
{
    
}


}
     return 0;
}