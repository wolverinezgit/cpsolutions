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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll d;
    cin >> d;
    for (i = 1; i <= 10000;i++)
{
    ll lcm2=0;
    ll lcm1 = (i*(i+d))/__gcd(i, i + d);
if(d-i>1)
     lcm2 = (i * ( d-i)) / __gcd(i, i + d);
    if (lcm1 != d && lcm1 != (i + d))
    {
        cout << lcm1 << "\n";
        break;
}
if (lcm2!= d && lcm2 != (d-i)&&lcm2!=0)
{
    cout << lcm2 << "\n";
    break;
}
}
}
 return 0;
}