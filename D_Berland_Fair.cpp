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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> n >> t;
 ll arr[n];
 ll sum = 0;
 ll c = 0;
 for (i = 0;i<n;i++)
{
     cin >> arr[i];
     mn = min(arr[i], mn);
}
     ll t1 = t;
     ll lc = 0;
     for (i = 0; i < n; i++)
     {
         if (arr[i] <= t1)
         {
             t1 -= arr[i];
             lc++;
             sum += arr[i];
         }

}
ll rem = 0;
if(sum!=0)
rem = t % sum;
while(rem<=mn)
{
    ll rem1 = rem;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > rem1)
            continue;
        else
        {
            c++;
            rem1 -= arr[i];
        }


}
rem = rem1;
}
c += (t / sum)*lc;
cout << c << endl;
return 0;
}