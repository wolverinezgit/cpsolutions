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
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    fast_cin();
    ll t;
    while (t--)
    {
        ll n, q, m;
        cin >> n >> q >> m;
        ll a[n];
        ll i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        ll b[1000001] = {};
        map<pair<ll, ll>, ll> m1;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (a[l] > m)
            {
                continue;
            }
            else if (a[l] <= m && a[r] > m)
            {
                b[a[l]]++;
                b[m + 1]--;
            }
            else
            {
                b[a[l]]++;
                b[m + 1]--;
                m1[{a[l], a[r]}]++;
            }
        }
        for (auto x : m1)
        {
            ll ai = x.first.first;
            ll bi = x.first.second;
            ll l = x.second;
            b[bi + ai] -= l;
            b[bi + 2 * ai] += l;
            ll c = bi + 2 * ai;
            while (c + bi <= m)
            {
                c += bi;
                b[c] -= l;
                b[c + ai] += l;
                c += ai;
            }
        }
        ll mx = 0;
        for (i = 1; i <= m; i++)
        {
            b[i] += b[i - 1];
            mx = max(mx, b[i]);
        }
        cout << mx << endl;
 }
 return 0;

 
}