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
 ll y,k,n,i,flag=0;
 cin >>y>>k>>n;
 for (i = 1; i <= n/k;i++)
{
if((i*k)-y>0)
{
    cout << (i*k) - y << " ";
    flag = 1;

}}
if(flag==0)
    cout << -1;

     return 0;
}