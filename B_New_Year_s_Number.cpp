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
    cin >> n;
    ll md = n % 10;
    ll f = 0;
    for (i = md; i <= n;i+=10)
{
if((n-(i*2021)>=0&&(n-(i*2021))%2020==0))
    f = 1;

}
if(f==1)
    cout << "YES" << endl;
else
{
    cout << "NO" << endl;
}

}
 return 0;
}