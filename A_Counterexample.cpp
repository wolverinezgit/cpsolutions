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
 long long int l, r,a,b,c;
 cin >> l >> r;
 if(l%2==0)
{
     a = l;
 b = l + 1;
 c = l + 2;
}
else
{
    a = l + 1;
    b = l + 2;
    c = l + 3;
}
if(c<=r)
    cout << a << " " << b << " " << c;
else
{
    cout << -1;
}

return 0;
}