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
cin>>n;
map<ll, ll> m;
ll sum = 0;
for (i = 0; i < n;i++)
{
  
    ll p;
    cin >> p;
    m[p]++;

}
vector<ll> v;
for(auto x:m)
{
    v.pb(x.second);

    mx = max(mx, x.second);
}
ll dp[mx + 1]={0};
sort(v.begin(), v.end());
dp[0] = 0;
j = v.size() - 1;
for (i = mx; i >= 1;i--)
{
if(j<0)
    break;

if(dp[i]==0&&i<=v[j])
{
    dp[i] =i;
    j--;
}

}
for (i = 1; i <= mx;i++)
{
    sum += dp[i];

}

cout << sum << endl;
}
 return 0;
}