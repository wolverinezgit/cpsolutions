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
 ll k;

 cin >> n >> k;
 vector <ll> v;

ll d=0;
 for (i = 1; i <= 2 * n;i++)
{
    v.pb(i);
}


for (i = 0;i<2*n-1;i=i+2)
{
if(d<k)
{
    swap(v[i], v[i + 1]);
    d++;
}
else
{
    break;
}

}
for(ll x:v)
    cout << x << " ";

    return 0;
}