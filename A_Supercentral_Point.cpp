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
 ll t,i,j,flag=0,c=0;
 cin >> t;
 vector<ll> x(t);
vector<ll>y(t);
 while (t--)
 {
     ll a, b;
     cin >> a >> b;

     x.pb(a);
     y.pb(b);

}

    
for (i = 0; i < t;i++)
{
    ll u = 0, d = 0, r = 0, l = 0;
    for (j = 0; j < t;j++)
{
if(x[i]==x[j] && y[i] >y[j])
    d++;
if (x[i] == x[j] && y[i] < y[j])
    u++;
if (x[i] <x[j] && y[i] == y[j])
    r++;
if (x[i] > x[j] && y[i] == y[j])
    l++;
}

if(u&&d&&r&&l)
    c++;

}
cout << c;
return 0;
}