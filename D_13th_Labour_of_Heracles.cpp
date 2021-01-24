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
    cin >> n;
    map<ll, ll> m;
    ll sum = 0;
    for (i = 1; i <= n;i++)
{
    ll p;
    cin >> p;
    m[i] = p;
    sum += p;
}
map<ll, ll> m1;
for (i = 0; i < n - 1;i++)
{
    ll z1,z2;
    cin >> z1>>z2;

    m1[z1]++;
    
    m1[z2]++;
}
vector<ll> v;
for(auto x:m1)
{
if(x.second>1)
{
    for (j = 2;j<=x.second;j++)
{
        v.pb(sum + m[x.first]);

    sum += x.first;
}
}
}
sort(v.begin(), v.end(),myComp);
for(auto z:v)
cout<<z<<" ";
cout << endl;
}
 return 0;
}