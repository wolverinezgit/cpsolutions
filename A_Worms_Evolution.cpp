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
 ll arr[t];
 for (i = 0; i < t;i++)
     cin >> arr[i];
 
 for (i = 0; i < t;i++)
{
    for (j = 0; j < t&&j!=i;j++)
{

    for (ll k = 0; k < t;k++)
{
    if (k != i && k != j)
{
        if (arr[k] == (arr[i] + arr[j]))
{

        cout << k+1 << " " <<i+1<< " " <<j+1<< endl;
    flag = 1;
    break;}
}
}
if (flag == 1)
    break;
}
if (flag == 1)
    break;
}
if(flag==0)
    cout << -1 << endl;
     return 0;
}