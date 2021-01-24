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
 ll n, m;
 cin >> n>>m;
 ll arr[m];
 ll c = 0;
 ll i;
 for (i = 0; i < m;i++)
     cin >> arr[i];
 ll p = 1;
 for (i = 0; i < m;i++)
{

    if(arr[i]<p)
        c += (n - p) + arr[i];
else
{
    c += (arr[i] - p);
}


p = arr[i];
}
cout << c << endl;
return 0;
}