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
    cin >> n;
    string s1, s2, s;
    ll l = 0, r = n - 1;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll last = 0;
    for (i = 1; i <= 2; i++)
    {
        if (i == 1)
        {
            last = arr[0];
            s = "L";
            l++;
        }
        else
        {
            last = arr[n - 1];
            s = "R";
            r--;
        }

        while (l <= r)
        {

            if (arr[l] > last && arr[r] > last)
            {

                if (arr[r] < arr[l])
                {
                    s += 'R';
                    last = arr[r];
                    r--;
                }
                else
                {
                    s += 'L';
                    last = arr[l];
                    l++;
                }
            }
            else if (arr[l] > last || arr[r] > last)
            {
                if (arr[l] < arr[r])
                {
                    s += 'R';
                    last = arr[r];
                    r--;
                }
                else
                {
                    s += 'L';
                    last = arr[l];
                    l++;
                }
            }
            else
            {
                break;
            }
        }
        if (i == 1)
            s1 = s;
        else
            s2 = s;
        s = " ";
    }
    if (s1.length() > s2.length())
    {
        cout << s1.length() << endl
             << s1 << endl;
    }
    else
    {
        cout << s2.length() << endl
             << s2 << endl;
    }

    return 0;
}