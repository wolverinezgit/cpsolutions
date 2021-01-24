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
cin>>n;
vector<ll> v;
ll c = 0;
ll sum1 = 0,sum=0;
for (i = 1; i <= n;i++)
{
    ll x, y;
    cin >> x >> y;
    sum += (x + y);
    v.pb((x + y));
}
sort(v.rbegin(), v.rend());
for (i = 0; i < v.size();i++)
{
    sum1 += (v[i]);
    c++;
    if (sum1 > (sum - sum1))
    {
        flag = 1;
        break;
}


}
if(flag==1)
    cout << c << endl;
else
{
    cout << -1 << endl;
}


    return 0;
}