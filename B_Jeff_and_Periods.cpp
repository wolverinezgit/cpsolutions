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
 map<ll, vector<ll>> m;
 vector<pair<ll,ll> >v;
 ll p;
 for (i = 0; i < n; i++)
 {
cin>>p;
m[p].pb(i);
}
for(auto x:m)
{
    set<ll> s;
    s.insert(0);
    for (i = 0; i < x.second.size()-1;i++)
{
    s.insert(x.second[i+1]-x.second[i]);


}
if(s.size()==1)
{
    v.pb(mp(x.first, 0));
  


}
else if(s.size()==2)
{
    s.erase(0);

    
    for (auto z = s.begin();z!=s.end();z++)
{

    v.pb(mp(x.first, *z));
}
}

}
cout << v.size() << endl;
for (i = 0; i < v.size();i++)
{
    cout << v[i].first << " " << v[i].second << endl;
}
    return 0;
}