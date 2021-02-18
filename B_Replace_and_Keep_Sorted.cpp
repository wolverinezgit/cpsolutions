#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, q, m, i;
        cin >> n >> q >> m;
        ll a[n];
        for (int i = 0; i < n; i++)
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
            int ai = x.first.first;
            int bi = x.first.second;
            int l = x.second;
            b[bi + ai] -= l;
            b[bi + 2 * ai] += l;
            int c = bi + 2 * ai;
            while (c + bi <= m)
            {
                c += bi;
                b[c] -= l;
                b[c + ai] += l;
                c += ai;
            }
        }
        ll mx = 0;
        for ( i = 1; i <= m; i++)
        {
            b[i] += b[i - 1];
            mx = max(mx, b[i]);
        }
        cout << mx << endl;
    }
    	return 0;
}