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
 ll l, b, l1, b1, l2, b2;
 cin >> l >> b >> l1 >> b1 >> l2 >> b2;


if(l1+l2<=l&&b>=max(b1,b2))
flag=1;
if (b1+b2<=b && l >= max(l1, l2))
    flag = 1;
if (l1 + b2 <= l && b >= max(b1,l2))
    flag = 1;
if (l1 + b2 <= b && l >= max(b1, l2))
    flag = 1;
if (b1+l2 <= l && b >= max(b2,l1))
    flag = 1;
if (b1 + l2 <= b && l>= max(b2, l1))
    flag = 1;
if(l1+l2<=b&&l>=max(b1,b2))
    flag = 1;
if (b1 + b2 <= l && b>= max(l1, l2))
    flag = 1;

if(flag==1)
    cout << "YES";
else
    cout << "NO";
        return 0;
}