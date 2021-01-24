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
    pair<ll, ll> z2;
    ll z1;
    map<ll, ll> m;
    for (i = 0;i<n;i++)
{
    cin >> arr[i];
    m[arr[i]]++;
if(arr[i]==0)
    flag == 1;
    sum += arr[i];
}
if(flag==0)
    cout << -1 << endl;

       else if(sum%3!=0&&flag==1)
{
    vector < pair<ll, ll> v;
for(auto x:m)
{
if(x.first!=0)
    v.pb(mp(x.second, x.first));

}
sort(v.begin(),v.end());
for (i =0;i<v.size();i++)
{
if((v[i].first*v[i].second)==sum%3)
{
    z1 = v[i].second;
    break;
}
}
for (i = 0; i < v.size();i++)
{
    for (j = 0; j < v.size();j++)
{
if(i!=j&&(v[i].first*v[i].second+v[j].first+v[j].second)%3==sum%3)
    z2 = mp(v[i].second, v[j].second);
}
}
if(m[z1]>(m[z2.first]+m[z2.second]))
{
    h = 1;
}
else if (m[z1] < (m[z2.first] + m[z2.second]))
{
    h = 0;
}
else
{
    
}

}


 return 0;
}