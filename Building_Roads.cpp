#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second

#define pob pop_back
#define pf push_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<bool> vis;
vector<vector<ll>> v;
vector<ll> lead;

void dfs(ll u)
{

    if (!vis[u])
    {
        vis[u] = true;
        for (auto i : v[u])
        {

            if (!vis[i])
            {

                dfs(i);
            }
        }
    }
}
    int main()
    {
        fast_cin();
        ll n,e,c=0,i;
        cin >> n >> e;
        vis.resize(n + 1);
        v.resize(n + 1);
        for (i = 1; i <= e;i++)
{
ll x,y;
cin >> x >> y;
v[x].pb(y);
v[y].pb(x);
}

for (i = 1;i<=n;i++)
{
if(!vis[i])
{
lead.pb(i);
c++;
dfs(i);


}

}
cout << c - 1 << endl;
ll z = lead[0];
for (i = 1; i < lead.size();i++)
    {
        cout << z << " "<<lead[i] << endl;
        z = lead[i];

}
    return 0;
    }