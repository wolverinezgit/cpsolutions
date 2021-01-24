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
 ll t,i,n,j,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll m;
    cin >> n>>m;
    ll sum1 = 0, sum2 = 0;
    ll a1[n];
    ll a2[m];
    ll flag = 0, p = 0;
    for (i = 0; i < n; i++)
{
        cin >> a1[i];
        sum1 += a1[i];
}
    for (i = 0; i < m; i++)
{
    cin >> a2[i];
    sum2 += a2[i];
}
sort(a1, a1 + n);
sort(a2, a2 + m,greater<ll>());
vector<ll> diff;
for (i = 0; i < min(m,n);i++)
{
   
        if ( a2[i] > a1[i])
        {
            diff.pb(a2[i] - a1[i]);
        }
}

sort(diff.rbegin(), diff.rend());

if(sum1<=sum2)
{
for (i = 0;i<diff.size();i++)
{
    sum1 += diff[i];
sum2-=diff[i];
p++;
if(sum1>sum2)
{
    flag = 1;

    break;
}
}
if(flag==1)
    cout << p << "\n";
else
{
    cout << -1 << "\n";
}

}
else
{
    cout << 0 << "\n";
}
}
 return 0;
}