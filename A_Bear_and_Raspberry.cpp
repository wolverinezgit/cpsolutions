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
 ll t,i,j,c,flag=0,mx=0,n;
 cin >> n>>c;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr[i];
 for (i = 0; i < n - 1;i++)
{
    mx = max(mx, arr[i] - arr[i + 1] - c);

}
cout << mx << endl;

 return 0;
}