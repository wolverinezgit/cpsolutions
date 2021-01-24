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
 ll t,i,n,j,flag=0,m,mx=0,mn=1e9+7;
 cin >> n>>m;
 vector<ll> v;
 ll sum = 0;

 for (i = 0; i < n; i++)
 {
     ll p;
     cin >> p;
if(p<0)
    v.pb(p);
  


}
    
sort(v.begin(),v.end());
ll z = min((ll)v.size(), m);
for (i = 0; i < z;i++)
{
    sum += v[i];
}
cout << -sum;
return 0;
}