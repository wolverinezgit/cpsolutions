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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    mn = 1e9 + 7;
    cin >> n;
    ll arr[n];
    map<ll,ll> m;
    for (i = 0; i < n;i++)
{
    ll p;
    cin >> p;
    arr[i] = p;
    m[p]++;
}
for(auto x:m)
{
   
    if (x.second == 1)
    {
    
        mn = min(mn, x.first);
}

}
if(mn==1e9+7)
    cout << -1 << endl;
else
{
    for (i = 0; i < n;i++)
{
if(arr[i]==mn)
{
    cout << i + 1 << endl;
break;
}
}
       
}

}
 return 0;
}