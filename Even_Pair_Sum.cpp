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
while(t--){
    ll x, y;
    ll o1 = 0, e1 = 0, o2 = 0, e2 = 0;
    cin >> x >> y;
if(x%2)
{
    e1 = (x - 1) / 2;
    o1 = x - e1;
}
else
{
    e1 = (x ) / 2;
    o1 = x - e1;
}
if (y% 2)
{
    e2 = (y - 1) / 2;
    o2 = y - e2;
}
else
{
    e2 = (y) / 2;
    o2 = y - e2;
}

cout << (o1 * o2) + (e1 * e2) << "\n";



}
 return 0;
}