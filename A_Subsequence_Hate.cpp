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
while(t--)
{
    string s;
    cin >> s;
    ll n = s.length();
    ll p0[n] = {0};
    ll s0[n] = {0};
    ll p1[n] = {0};
    ll s1[n] = {0};
    ll i;
    ll one = 0, z = 0;
    for (i = 0; i < n;i++)
{
if(s[i]=='0')
    z++;
else
{
    one++;
}
p0[i] = z;
p1[i] = one;



}
// for (i = 0; i < n;i++)
// {
//     cout << p1[i] << "," << p0[i] << endl;
//     cout << s1[i] << "," << s0[i] << endl;
// }
    z = 0, one = 0;
for (i = n - 1; i >= 0;i--)
{
    if (s[i] == '0')
        z++;
    else
    {
        one++;
    }
    s0[i] = z;
    s1[i] = one;
}
ll mn = 1e9;
for (i = 0; i < n;i++)
{
if(i<n-1)
{
    mn = min(p1[i] + s0[i+1], mn);
    mn = min(p0[i] + s1[i+1], mn);
}


}

mn = min(p1[n - 1], mn);
mn = min(p0[n - 1], mn);
if(n==1)
    cout << 0 << endl;
else
cout << mn << endl;
}

 return 0;
}