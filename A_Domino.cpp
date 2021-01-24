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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
 ll odd1 = 0, odd2 = 0;
 ll sum1 = 0, sum2 = 0;
 ll arr[t][2];
 ll oo = 0,eo=0,oe=0;
 for (i = 0; i < t;i++)
{
    ll x, y;
    cin >> x >> y;
   
if((x%2)&&(y%2==0))
    oe++;
if((x%2==0)&&(y%2))
    eo++;
if((x%2)&&(y%2))
    oo++;

    sum1 += x;
    sum2 += y;
}
if ((sum1 % 2 == 0) && (sum2 % 2== 0))
    cout << 0 << endl;
else if(sum1%2&&sum2%2&&(eo||oe))
    cout << 1 << endl;
else
{
        cout << -1 << endl;
}


return 0;
}