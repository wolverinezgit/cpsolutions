#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define pop pop_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fast_cin();

    ll t, i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
    cin >> t;
    string s;
    cin >> s;
    vector<ll> left;
    vector<ll> right;
    
    for (i = 0; i < s.length()/2; i++)
    {
       if(s[i]=='R')
           cout << i + 1 + t / 2 << " " << i + 1 << endl;
else
    cout << i + 1 << " " << i + 1 + t / 2 << endl;

}



    return 0;
}