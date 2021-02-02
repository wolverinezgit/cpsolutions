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
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     ll c = 0;
     ll k;
     cin >> n >> k;
set<ll> s;
for(i=0;i<n;i++)
{
    ll p;
    cin >> p;

    s.insert(p);
}
ll z = s.size();

if(k==1&&s.size()>1)
{
    flag = 1;
}
z=z-k;
k--;
if(z>0&&k!=0)
{
if(z%k==0)
    c = z / k;
else
{
    c = z / k;
    c++;
}

}
if(flag==0)
    cout << c + 1 << endl;
else
{
    cout << -1 << endl;
}
}


 return 0;
}