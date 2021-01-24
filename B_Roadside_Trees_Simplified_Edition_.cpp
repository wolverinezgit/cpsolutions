#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fast_cin();
    ll t, i, j, flag = 0;
    const long long int mdl = 1e9 + 7;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
    long long int arr[n];
        ll i;
        long long int p[n];
        ll rem = -1;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                rem = i;
            }
        }
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 && arr[i] != 1)
                arr[i] = arr[i] - 1;
        }
        if (arr[n - 1] % 2 == 0 && arr[n - 1] != 1)
            arr[n - 1] = arr[n - 1] - 1;
        p[0] = (arr[0] % mdl);
        for (i = 1; i < n; i++)
            p[i] = (p[i - 1] + arr[i]) % mdl;
        ll q;
        cin >> q;
        for (i = 0; i < n; i++)
            cout << p[i] << " ";
        while (q--)
        {
            long long int a;
            cin >> a;
            long long quo, r;
            quo = a / n;
            r = a % n;
            if (rem == 0)
                cout << 1 << endl;
            else if (rem != n - 1)
            {

                cout << p[rem] % mdl << endl;
            }
            else
            {

                if (r == 0)
                    cout << ((q % mdl) * p[n - 1]) % mdl << endl;
                else if (q == 0)
                    cout << (p[r - 1]) % mdl << endl;
                else
                {
                    cout << (((q % mdl) * p[n - 1]) % mdl + (p[r - 1]) % mdl) % mdl << endl;
                }
            }
        }
    }
    return 0;
}