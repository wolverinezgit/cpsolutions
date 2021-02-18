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
     string s1, s2;
     cin >> n >> s1 >> s2;
     vector<ll> v1;
     vector<ll> v2;
     for (i = 0; i < n-1;i++)
{
if(s1[i]!=s1[i+1])
{
    v1.pb(i + 1);


}

}
for (i = 0; i < n - 1;i++)
{
    if (s2[i] != s2[i + 1])
    {
        v2.pb(i + 1);
    }
}
if(s1[n-1]=='1')
{
    v1.pb(n);
}
if(s2[n-1]=='1')
{
    v2.pb(n);
}
reverse(v1.begin(), v1.end());
cout << v1.size() + v2.size() << " ";
for(ll x:v1)
{
    cout << x << " ";
}
for(ll x:v2)
{

    cout << x << " ";
}
cout << endl;
}


 return 0;
}