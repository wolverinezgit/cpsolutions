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
 ll t=0,i,n,j,flag=0,mx=0,mn=1e9+7;
 ll k, c;
 cin >> n >> k >> c;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr[i];
 ll tl = 0;
 for (i = 0;i<n;i++)
{
if(arr[i]>k)
    tl = 0;
else if(tl+1==c)
{
    t++;

}
else
{
    tl++;
}


}
cout << t << endl;
return 0;
}