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
 ll n;
 cin >> n;
 ll i, f = 0;
 ll arr[n] = {0};
if(n==1)
    arr[0] = 1;
else
{
    arr[0] = 2;
}
ll c = 1;
ll idx = 1;
ll x = 2;
ll c1 = 0;
while(c!=n)
{
if(x<=0)
    f = 1;
if(n-idx+1<=0)
    f = 1;
    arr[x-1] = n - idx + 1;
    ll temp=x;
    x = n - idx + 1;
    idx = temp;
    c++;

}
map<ll, ll> m;
for (i = 0; i < n; i++)
{
    if (arr[i] > n)
        c1++;
    else if (m.find(arr[i]) != m.end())
    {
        c1++;
    }
    else
    {
        m[arr[i]]++;
    }
}
// if(c1>0)
//     f = 1;
if(f==1)
    cout << -1 << endl;
else
{
    


for (i = 0; i < n;i++)
    cout << arr[i]<<" ";
cout << endl;
}
return 0;
}