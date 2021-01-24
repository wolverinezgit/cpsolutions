#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,j,flag=0,mx=0;
 cin >> t;
 ll arr[t];
 map<ll, ll> m;
 for (i = 0; i < t;i++)
{
     cin >> arr[i];
     m[arr[i]]++;
}
for(auto x:m)
{
    mx = max(mx, x.second);

}
if(mx>((t+1)/2))
    cout << "NO";
    else
    {
        cout << "YES";
    }
    


return 0;
}