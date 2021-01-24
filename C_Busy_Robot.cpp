#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;


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
    cin >> n;
    ll s = 0;
    vector<pair<ll, ll>> v;
    while (n--)
    {
       
        ll x, y;
        cin >> x >> y;

        v.pb(mp(x,y));



}
ll last = v[0].first;
ll pos=v[0].second;
ll time = v[0].first + abs(v[0].second);
for (i = 1; i < v.size();i++)
{
if(v[i].first>=time)
{
if(v[i].first-last>=1)
    s++;

time += abs(pos - v[i].second);
last = v[i].first;

}

}
cout << s << endl;
}
 return 0;
}