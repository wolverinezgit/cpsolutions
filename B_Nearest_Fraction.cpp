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

    double a, b;
    cin >> a >> b >> n;
double c=a/b;
c=c*10.0;
double a1 = (ceil)(c);
double a2 = (floor)(c);
ll z = c1;
ll p = 10;
ll q = 0;
while(q!=1)
{
 q = __gcd(z, p);
    z /= q;
    p /= q;
}
if(b<=n)
    cout << a << "/" << b << endl;

else
cout << z << '/' << p << endl;
return 0;
}