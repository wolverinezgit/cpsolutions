#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
#define v vector
#define pob pop_back
#define pf push_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,n,j,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll k;
    ll flag = 0,flag1=0;
    cin >> n>>k;
    ll x, y;
    vector<pair<ll, ll>> v;
    for (i = 0; i < n;i++)
{
    
    cin >> x >> y;
    v.pb(mp(x, y));

}

for (i = 0; i < n;i++)
{
    for (j = 0; j < n;j++)
{
        ll z = 0;
    z = abs(v[j].first - v[i].first) + abs(v[j].second - v[i].second);
if(z<=k)
{
    flag++;
}


}
if(flag==n)
{
    flag1 = 1;
    break;
}
flag = 0;
}
if(flag1==1)
    cout << 1 << endl;
else
{
    cout << -1 << endl;
}

}
 return 0;
}