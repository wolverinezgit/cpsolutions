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

ll p,q,l,r,result=0;
cin >> p >> q >> l >> r;
ll a[p],b[p],c[q],d[q];
for (i = 0; i < p;i++)
    cin >> a[i]>>b[i];
for (i = 0; i < q;i++)
    cin >> c[i]>>d[i];
map<ll, ll> m1;
map<ll, ll> m2;
for (i = 0; i < p;i++)
{
    for (j = a[i];j<=b[i];j++)
        m1[j]++;
}
for (i = 0; i < q; i++)
{
    for (j = c[i]; j <= d[i]; j++)
        m2[j]++;
}
for (ll z = l; z <= r;z++)
{
   for(auto x:m2)
       {
if(m1.find(x.first+z)!=m1.end())
  {

 mx++;
   break;
  }
        }

}
cout << mx;
return 0;
}