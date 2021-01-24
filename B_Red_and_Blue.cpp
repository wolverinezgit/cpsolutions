#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{

    ll a, b, i;
    cin >> a;
    ll a1[a];
    for (i = 0; i < a; i++)
        cin >> a1[i];
    cin >> b;
    ll a2[b];
    ll sum1 = 0, sum2 = 0, p1 = 0, p2 = 0, mx1 = 0, mx2 = 0;
    vector<ll> v1;
    vector<ll> v2;
    for (i = 0; i < b; i++)
        cin >> a2[i];
    for (i = 0; i < a; i++)
    {
        sum1 += a1[i];
        v1.pb(sum1);
    }

    for (i = 0; i < b; i++)
    {
        sum2 += a2[i];
        v2.pb(sum2);
    }
    for (i = 0; i < v1.size(); i++)
    {
        mx1 = max(mx1, v1[i]);
    }
    for (i = 0; i < v2.size(); i++)
    {
        mx2 = max(mx2, v2[i]);
    }

    ll z = 0;
    cout << max(z, mx1 + mx2) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
#include <bits/stdc++.h>
    using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    void solve()
    {

        ll a, b, i;
        cin >> a;
        ll a1[a];
        for (i = 0; i < a; i++)
            cin >> a1[i];
        cin >> b;
        ll a2[b];
        ll sum1 = 0, sum2 = 0, p1 = 0, p2 = 0, mx1 = 0, mx2 = 0;
        vector<ll> v1;
        vector<ll> v2;
        for (i = 0; i < b; i++)
            cin >> a2[i];
        for (i = 0; i < a; i++)
        {
            sum1 += a1[i];
            v1.pb(sum1);
        }

        for (i = 0; i < b; i++)
        {
            sum2 += a2[i];
            v2.pb(sum2);
        }
        for (i = 0; i < v1.size(); i++)
        {
            mx1 = max(mx1, v1[i]);
        }
        for (i = 0; i < v2.size(); i++)
        {
            mx2 = max(mx2, v2[i]);
        }

        ll z = 0;
        cout << max(z, mx1 + mx2) << endl;
    }
    int32_t main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout << fixed;
        cout << setprecision(10);
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        int t = 1;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            //    cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}