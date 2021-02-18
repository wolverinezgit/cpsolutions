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
     cin >> n;
     ll arr[n];
     ll f = 0;
     for (i = 0; i < n;i++)
         cin >> arr[i];
     vector<ll>v;
     for (i = 1; i < n;i++)
{
if(v.size()==0)
    v.pb(arr[i]);
else
{
    if(v.back()<arr[i])
{
  
while(v.back()<arr[i])
{
    v.pop_back();
if(v.size()==0)
    break;
}
    v.pb(arr[i]);
}
else
{
    v.pb(arr[i]);
}


}


}
ll p = 0;
for (i = 0; i < v.size();i++)
{
if(v[i]<arr[0])
    p = 1;


}


    if (p == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
    }

}


 return 0;
}