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
    cin >> a >> b >> k;
    ll a1[k];
    ll a2[k];
    for (i = 0; i < k;i++)
        cin >> a1[i];
    for (i = 0; i < k;i++)
        cin >> a1[i];
    for (i = 0; i < k; i++)
        cin >> a2[i];
    map<ll, ll> m1;
    map<ll, ll> m2;
    for (i = 1; i <= a;i++)
{
    m1[i] = 0;
}
for (i = 1; i <= b; i++)
{
    m2[i] = 0;
}
for (i = 0; i < k;i++)
{
    m1[a1[i]]++;
}
for (i = 0; i < k; i++)
{
    m2[a2[i]]++;
}
ll c1 = 0, c2 = 0;
for(auto x:m1)
{
if(x.second==0)
    c1 += 2;
else if(x.second==1)
    c1++;
}
for (auto x : m2)
{
    if (x.second == 0)
        c2 ++;
   
}
cout << min(c1, c2) << endl;
}
 return 0;
}