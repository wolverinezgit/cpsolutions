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
ll n;
ll i;
ll mx = 1e12+1;
cin>>n;
map<ll, ll> m;
for (i = 1; i * i <= n;i++)
{
if(n%i==0)
{
if(n/i==i)
{
    m[n / i]++;

}
else
{
    m[n / i]++;
    m[i]++;
}


}

}

for(auto x:m)
{
if(m.find(n/x.first)!=m.end()&&n/x.first!=x.first)
{
if(((n/x.first)*(x.first))/__gcd(n/x.first,x.first)==n)
    mx = min(max(x.first, n / x.first),mx);

}
}
if(mx==1e12+1)
    cout << n << " " << 1 << endl;
else
cout << mx << " " << n / mx << endl;

return 0;
}