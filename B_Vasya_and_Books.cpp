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
map<ll, ll> m;
ll a1[n];
ll a2[n];
ll p = 0;
for (i = 0; i < n;i++)
{
    cin >> a1[i];
    m[a1[i]] = i;
}
for (i = 0; i < n;i++)
{
    cin >> a2[i];
   
}
ll last = -1;
for (i = 0; i < n;i++)
{
    ll c = 0;
    if (m[a2[i]] < 0)
        cout << 0 << " ";
    else
    {
        for (j = last+1; j <= m[a2[i]]; j++)
        {
            m[a1[j]] = -1;
            c++;
        }
        cout << c << " ";
        last = j-1;
}
}
cout << endl;

 return 0;
}