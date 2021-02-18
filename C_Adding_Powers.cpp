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
cin>>t;

while(t--)
{
    ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
    cin >> n;
    ll k;
    cin >> k;
ll arr[n];
ll f = 0;
sort(arr, arr + n);
map<ll, ll> m;
for (i = 0; i < n;i++)
{
    cin >> arr[i];
    ll c = 0;
    while (arr[i])
    {
        
            m[c++]+=arr[i]%k;
           
        
        arr[i] /= k;
}
}
for(auto x:m)
{
if(x.second>1)
    f = 1;
}
if(f==0)
    cout << "YES"
         << "\n";
else
{
    cout << "NO"
         << "\n";
}

}


 return 0;
}