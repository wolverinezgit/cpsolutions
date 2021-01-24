#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> n;
 vector<ll> o;
 vector<ll> z;
 for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
if(p==1)
    o.pb(p);
else
{
    z.pb(p);

}


}
if(z.size()>0)
cout<<2<<" ";
if(o.size()>0)
    cout << 1 << " ";
for (i = 1; i < z.size();i++)
    cout << 2 << " ";
for (i = 1;i<o.size();i++)
{
    cout << o[i] << " ";


}

    return 0;
}