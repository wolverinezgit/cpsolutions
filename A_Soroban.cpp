#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
if(t==0)
    cout << "O-|-OOOO";
while (t)
{
    ll p = t % 10;
    if (p >= 5)
    {
        cout << '-' << 'O' << '|';
    }
    else
    {
        cout << "O-|";
    }
    ll q = p % 5;
    for (i = 1; i <= q; i++)

    {

        cout << 'O';
    }
    cout << '-';
    for (i = q + 1; i <= 4; i++)
        cout << 'O';
    cout << endl;
    t /= 10;
}
 return 0;
}