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
 
    ll k,c=0,p=0;
    cin >> n >> k;
ll arr[n];
map <ll,ll> m;
for (i = 0; i < n;i++)
{
 
   cin >> arr[i];
if(arr[i]<=k)
  c++;
 m[arr[i]]++;
}
while(m[k]!=c)
{
    for (auto x = m.rbegin(); x != m.rend();x++)
    {
        if (x->first < k && x->second > 0)
        {
            m[x->first + 1]++;
            m[x->first]--;
        }
}
p++;
}
cout << p << endl;

return 0;
}

