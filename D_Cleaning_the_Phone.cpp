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
    ll mem;
    flag = 0;
    cin >> n >> mem;
    vector<ll> a1;
    vector<ll> a2;
    ll z = 0;
    ll sum = 0;
    vector<ll> v1;
    vector<ll> v2;
    for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    v1.pb(p);
}
for (i = 0; i < n; i++)
{
    ll p;
    cin >> p;
    v2.pb(p);
}
        for (i = 0; i < n; i++)
        {
         
            if (v2[i] == 2)
            {
                a2.pb(v1[i]);
            }
            else
            {
                a1.pb(v1[i]);
            }
        }
sort(a1.rbegin(), a1.rend());
sort(a2.rbegin(), a2.rend());
for (ll x:a1)
{
    sum += x;
    z++;
    if (sum>=mem)
{
    flag = 1;
    break;
}
}
if(flag==0)
{
for(ll x:a2)
{
    sum += x;
    z += 2;
    if (sum >= mem)
    {
        flag = 1;
        break;
    }
}
}
if(flag==0)
    cout << -1 << endl;
else
cout << z << endl;
}
 return 0;
}