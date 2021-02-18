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
 string s;
 cin >> s;
 ll i;
 ll n = s.length();
 ll c1 = 0;
 ll mn = INT_MAX;
 ll res1 = 0;
 ll res2 = 0, c2 = 0;
ll u[n]={0};
ll l[n] = {0};
for (i = 0; i < s.length();i++)
{
    u[i] = c1;
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        c1++;

}

}
for (i = s.length() - 1; i >= 0;i--)
{
    l[i] = c2;
    if (s[i] >= 'A' && s[i] <= 'Z')
    {

        c2++;
}

}
for (i = 0; i < s.length();i++)
{
    mn = min(mn, u[i] + l[i]);

}
cout << mn << endl;

return 0;
}