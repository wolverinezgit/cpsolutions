#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fast_cin();
    ll t, i, j, flag = 0, mx = 0, mn = 1e9 + 7;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n * k];
        for (i = 0; i < (n * k); i++)
            cin >> arr[i];
        ll p = 0;
        if (n % 2 == 0)
            p = ((n) / 2) - 1;
        else
        {
            p = ((n + 1) / 2) - 1;
}

        ll sum = 0;
        if (p == 0)
        {
            for (i = 0; i < n * k; i = i + n)
                sum += (arr[i]);
        }
        else
        {
            ll c = 0;
            for (i = ((n * k)) - (n - 1); i >= 0 && c < k; i = i - (n - 1))
            {
                sum += arr[i];
                c++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}