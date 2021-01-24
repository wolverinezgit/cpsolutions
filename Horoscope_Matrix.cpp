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
 cin >> t;
while(t--){
    ll n, m;
cin>>n>>m;
ll c = 0;
ll arr[n][m];
for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
        cin >> arr[i][j];

}
map<ll, ll> m1;
for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
{
if(i==j)
{
    c++;
    m1[arr[i][j]]++;
}
}
}
ll q;
cin >> q;
while(q--)
{
    ll x, y,p;
    cin >> x >> y>>p;

    if (x == y)
    {
if(m1.find(arr[x-1][y-1])!=m1.end())
{
        m1[arr[x-1][y-1]]--;
        m1[p]++;
}
else
{
    m1[p]++;
}

}
arr[x - 1][y - 1] = p;
if(m1[arr[0][0]]==c)
    cout << "Yes"
         << "\n";
else
{
    cout << "No"
         << "\n";
}

}
}
 return 0;
}