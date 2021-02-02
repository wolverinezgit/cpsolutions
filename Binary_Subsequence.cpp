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
 fast_cin();
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     cin >> n;
     string s;
     cin >> s;
     ll dp1[n]={0};
     ll dp0[n] = {0};
     ll c = 0;
     ll z = 0, o = 0;
     ll c0 = 0, c1 = 0;
     for (i = n - 1; i >= 0;i--)
{


if(s[i]=='0')
    {
c0++;
dp0[i] = c0;
if(i<n-1)
    dp1[i] = dp1[i + 1];
    }
else
{
    c1++;
    dp1[i] = c1;
    if (i < n - 1)
        dp0[i] = dp0[i + 1];
}

}
// for (i = 0; i < n;i++)
// {
//     cout << dp1[i] << ',' << dp0[i] << endl;
// }

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            o++;
        else
        {
            break;
        }
    }
for (; i < s.length(); i++)
{
if(s[i]=='1'&&(dp1[i]>dp0[i]||dp1[i]==0))
{
if(dp1[i]==0)
    mn = min(mn, o+1);
else
    mn = min(mn, dp0[i] + o);
o++;
}
else
{
if(s[i]=='1')
    o++;
}

}
mn = min(o, mn);
cout << min(mn, dp0[0]) << endl;
}


 return 0;
}