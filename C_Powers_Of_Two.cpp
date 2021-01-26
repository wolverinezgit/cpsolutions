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
 cin >> n;
 ll a;
 ll diff = 0;
 cin >> a;
 ll req = 0;
 vector<ll> v;
 ll c = 0;
 while (n)
 {
     if (n & 1)
     {
         v.pb(c);
// if(c!=0)
//     req++;
     }
     c++;
     n = n >> 1;
}
map<ll, ll> m;
for(ll x:v)
{
    cout << x << " ";
    // m[x]++;
}
cout << endl;
sort(v.rbegin(), v.rend());
if(v.size()>a)
    cout << "NO" << endl;
else
{
    ll x = v.size();
    for (i = 0; i < v.size();i++)
{
if(v[i]+1+x<=a)
{
    m[1]++;
    m[1]++;
    for (j = 2; j <= v[i] - 1;j++)
{
    m[j]++;
}
}
else
{
     diff = a - x;
    m[1]++;
    diff--;
    for (i = 0; i < v.size();i++)
{


        while (diff > 0&&v[i]!=-1)
        {
            m[v[i] - 1]++;
            v[i] = v[i] - 1;
            diff--;
        }
}


}

}
if(diff!=0)
    cout << "NO" << endl;
else
{

    cout << "YES" << endl;
    for (auto z : m)
    {
        for (i = 1; i <= z.second; i++)
            cout << z.first << " ";
    }
}



cout << endl;
}


 return 0;
}