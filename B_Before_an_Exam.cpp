#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
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
 ll d,sumt,suml=0;
 cin >> d >> sumt;
 ll a1[d];
 ll a2[d];
 ll f[d];
 ll d1 = d;
 i = 0;
 while (d--)
{
    cin >> a1[i];
    cin >> a2[i];
    suml += a1[i];
    f[i] = a1[i];
    i++;
}
ll rem = sumt - suml;
if(rem>=0)
{
    // cout << rem << endl;
    for (i = 0; i < d1; i++)
    {
        if ((a2[i] - a1[i]) >= rem)
        {
            f[i] += rem;
            rem = 0;
        }
        else
        {
            f[i] += (a2[i] - a1[i]);
            rem -= (a2[i] - a1[i]);
        }
        // cout << rem << endl;
        if (rem == 0)
        {

            flag = 1;
            break;
        }
    }
}

    if (flag == 1)
    {
        cout << "YES" << endl;
        for (i = 0; i < d1; i++)
            cout << f[i] << " ";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}