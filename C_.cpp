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
 cin >> n;
ll arr[n];
for (i = 0; i < n;i++)
{
    cin >> arr[i];

}
map<ll, ll> m1;
map<ll, ll> m2;
vector<pair<ll,ll>> v1;
vector<pair<ll,ll>> v2;
ll t1 = 0, t2 = 0;
ll c1 = 0, c2 = 0;
for (i = 0; i < n;i=i+2)
{
    m1[arr[i]]++;
    t1++;
}
    for (i = 1; i < n; i = i + 2)
{
        m2[arr[i]]++;
        t2++;
}
ll maj1, maj2, z = 0;
for(auto x:m1)
{
    v1.pb(mp(x.second,x.first));
    c1++;
}
z = 0;
for (auto x : m2)
{
    v2.pb(mp( x.second,x.first));
    c2++;
}
sort(v1.begin(), v1.end());
sort(v2.begin(), v2.end());
if(v1[c1-1].second!=v2[c2-1].second)
    cout << t1 - v1[c1 - 1].first + t2 - v2[c2 - 1].first<< endl;
else if(c1==1&&c2==1)
{
    cout << min(t1,t2);


}
else if(c1==1||c2==1)
{
   if(c1==1)
       cout << t2 - v2[c2 - 2].first;
if(c2==1)
    cout << t1 - v1[c1 - 2].first;
}
else
{
    cout << min(t2 - v2[c2 - 2].first+t1-v1[c1-1].first, t1 - v1[c2 - 2].first+t2-v2[c2-1].first);
}


return 0;
}