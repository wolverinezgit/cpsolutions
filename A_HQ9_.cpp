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
    int i, j;
    vector<vector<int>> matrix;
    vector<int> v;
    int n, m, p;
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        vector<int> z;
        for (j = 0; j < m; j++)
        {
            cin >> p;
            z.pb(p);
        }
        matrix.pb(z);
}

for (i = 0; i < v.size();i++)
    cout << v[i] << " ";
    return 0;
}