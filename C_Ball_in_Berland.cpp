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
 cin >> t;
while(t--){
    ll a, b, k;
    ll c1 = 0, c2 = 0;
    cin >> a >> b >> k;
    map<ll, ll> m1;
    map<ll, ll> m2;
    for (i = 1; i <= k;i++)
{
    ll p;
    cin >> p;
    m1[p]++;

}
for (i = 1; i <= k; i++)
{
    ll p;
    cin >> p;
    m2[p]++;
}
for(auto x:m1)
{
    c1 += ((x.second * (x.second - 1)) / 2);
}
for (auto x : m2)
{
    c2 += ((x.second*(x.second-1)) / 2);
}
k = (k * (k - 1)) / 2;
ll z = 0;
if((k-c1-c2)>=0)
    cout << k - c1 - c2 << endl;
else
cout << min(k - c1 - c2,z) << endl;
}
 return 0;
}