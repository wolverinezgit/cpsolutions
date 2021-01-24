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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;

 cin >> n;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr[i];
if(arr[0]!=0)
{
    cout << 1;
return 0;
}
ll prev = 0;
mn = 0;

for (i = 1; i < n; i++)
{
 
    if ((arr[i] == prev + 1) || ((arr[i] <= mx+1)&&(arr[i]>=mn)))
       {
           mx = max(mx, arr[i]);

           prev = arr[i];
           continue;
} 
    else
    {
        flag = 1;
        break;

}

}
if(flag==0)
    cout << -1;
else
{
    cout << i + 1 << endl;
}

     return 0;
}