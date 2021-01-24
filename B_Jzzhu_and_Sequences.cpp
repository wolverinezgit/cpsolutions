#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 #define m 1000000007

int main()
{
 fast_cin();
 ll x,y,n,i;
 cin >> x >> y >> n;

 ll arr[6];

 long long int  sum = 0;
 arr[0] = x;
 arr[1] = y;
 for (i = 2; i < 6;i++)
{
    arr[i] = arr[i - 1] - arr[i - 2];

}
sum = (arr[(n-1)%6] % m);
if(sum<0)
    sum = sum + m;
cout
    << sum;
return 0;
}