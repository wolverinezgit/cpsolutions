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
 ll n,vol,i;
 cin >> n >> vol;
 ll arr[n];
 map<ll, ll,greater<ll>> m1;
 ll a1[n];
 ll sum = 0;
 for (i = 0; i < n;i++)
{
    cin >> a1[i];
    sum += a1[i];

}
if(sum<vol)
{
    cout << -1;
    return 0;

}
for (i = 0; i < n; i++)
{
    arr[i]=a1[i];
}
sort(arr, arr + n);
vector<ll> v;
if(arr[0]%2==0)
{
    v.pb(arr[0] / 2);
    m1[arr[0]] = v[0];
    vol -= (arr[0] / 2);
}
  else
  {
      v.pb((arr[0] / 2)+1);
      m1[arr[0]] = v[0];
      vol -= ((arr[0] / 2)+1);
  }
  

for (i = 1; i < n;i++)
{
    ll h;
    if (arr[i] % 2 == 0)
    {
         h = arr[0] / 2;

}
else
{
    h = (arr[0] / 2)+1;
}
if(h<=v[i-1]&&arr[i-1]<arr[i])
{
    h = v[i - 1] + 1;
    vol -= (v[i - 1] + 1);
    v.pb(v[i-1] + 1);
    m1[arr[i]] = v[i];
}
else
{
    vol -= (h);
    v.pb(h);
    m1[arr[i]] = v[i];
}


}
if(vol>0)
{
   
    for (auto x : m1)
    {
        if (vol <= 0)
            break;
        ll z = min(x.first, x.second + vol);
      
        ll z1 = z - x.second;
       
        vol -= (z1);
        m1[x.first] = z;
}


}
if(vol==0)
{




    for (i = 0; i < n;i++)
    {

  
    cout << m1[a1[i]] << " ";
}


}

else
{
    cout << -1 << endl;
}

    return 0;
}