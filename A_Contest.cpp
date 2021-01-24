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
 ll x,y,a,b;
 cin >> x >> y>>a>>b;
 x = max((3 * x) / 10, x - ((x * a) / 250));
 y = max((3 * y) / 10, y - ((y * b) / 250));
if(x>y)
    cout << "Misha";
else if(x==y)
    cout << "Tie";
else
{
    cout << "Vasya";
}

 return 0;
}