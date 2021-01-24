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
 ll t,i,n,j,flag=-1,mx=0,mn=1e9+7,p;
 cin >> n;
 for (i = 0; i <= n / 4;i++)
{
    p = 4* i;
if((n-p)%7==0)
{
    flag = i;
    break;

}

}
if(flag>=0)
{
    for (i = 1; i <=p/4;i++)
        cout << 4;
    for (ll j = 1; j <=(n-p)/7;j++)
        cout << 7;
}
else
{
    if(n%7==0)
{
        for (i = 1; i <= n / 7;i++)
            cout << 7;
}
else
{
    cout << -1;
}

}

     return 0;
}