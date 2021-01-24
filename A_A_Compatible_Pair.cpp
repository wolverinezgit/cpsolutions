#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
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
 long long int t,i,n,j,flag=0;
 long long int mn =1e18+1;
 
 ll k = 0;
 ll n1, n2;
 cin >> n1 >> n2;
 ll lmax = -1e18 - 1;
 ll a1[n1], a2[n2];
 for (i = 0; i < n1; i++)
 {
     cin >> a1[i];

}
for (i = 0;i<n2;i++)
    cin >> a2[i];
for (i = 0; i < n1;i++)
{
    lmax = -1e18 - 1;
    for (j = 0; j < n2;j++)
{
    for (k = 0; k < n1;k++)
{
if(i!=k)
{
    lmax = max(lmax, a1[k] * a2[j]);



}

}
}
mn = min(mn, lmax);

}
cout << mn << endl;


    return 0;
}