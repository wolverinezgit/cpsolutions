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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
ll m;
cin >> n >> m;
ll a[n], b[m];
ll g;

for (i = 0; i < n;i++)
    cin >> a[i];
for (i = 0; i < m;i++)
    cin >> b[i];


    g = a[1] - a[0];
    sort(a, a + n);
    for (i = 2; i < n; i++)
    {
        g = __gcd(g, a[i] - a[i - 1]);
 
}

for (i = 0; i < m;i++)
{
if(n==1)
    cout << b[i] + a[0] << " ";
else
cout << __gcd(a[0] + b[i], g) << " ";

}
    return 0;
}