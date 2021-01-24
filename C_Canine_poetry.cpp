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
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fast_cin();
    ll t, i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
    cin >> t;
    while (t--)
    {
        string s;
        ll c = 0;

        int k = 65;
        cin >> s;
        n = s.length();
        if (n != 1)
        {
            for (i = 0; i < s.length() - 2; i++)
            {
                if (s[i] == s[i + 1])
                {
                    s[i + 1] = (char)((k++) % 26);
                    c++;
                }
                if (s[i] == s[i + 2])
                {
                    s[i + 2] = (char)((k++) % 26);
                    c++;
                }
            }
        }
        if (n == 1)
            cout << 0 << endl;
        else
        {

            if (n >= 2 && s[n - 2] == s[n - 1])
                c++;
            cout << c << endl;
        }
    }
    return 0;
}