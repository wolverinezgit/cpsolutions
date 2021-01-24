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
    cin >> n;
    ll arr[n];
    map<ll, ll> m;

    for (i = 0; i < n;i++)
        cin >> arr[i];
    for (i = 1; i < n;i++)
{
if(arr[i]!=arr[i-1])
{
    m[arr[i]]++;
}
else
{
    continue;
}


}
if(m.find(arr[0])==m.end())
{
    m[arr[0]] = 0;
}

m[arr[n - 1]]--;
for(auto x:m)
{
    mn = min(x.second+1, mn);

}
cout << mn << endl;
mn = 1e9 + 7;
}
 return 0;
}