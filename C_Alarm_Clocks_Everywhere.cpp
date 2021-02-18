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
 ll n1, n2;
 ll f = 0;
 cin >> n1 >> n2;
 ll a1[n1];
 ll i;
 ll a2[n2];
 for (i = 0; i < n1;i++)
     cin >> a1[i];
 
 for (i = 0; i < n2; i++)
     cin >> a2[i];
 vector<ll> v;

 for (i = 1; i < n1;i++)
{
    v.pb(a1[i]-a1[0]);

}
ll g = v[0];
for (i = 1;i<v.size();i++)
{
    g = __gcd(g, v[i]);
}
    for (i = 0; i < n2; i++)
    {
if(a2[i]==g||(g%a2[i])==0)
    {
        f = 1;
        break;
}
    }
if(f==1)
{
    cout << "YES" << endl;
    cout << a1[0] << " " << i + 1 << endl;
}
    
else
{
    cout << "NO" << endl;
   
}


    return 0;
}