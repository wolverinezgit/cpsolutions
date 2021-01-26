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
cin>>n;
ll arr[n];
ll sum = 0;

for (i = 0; i < n;i++)
{
    cin >> arr[i];
if(arr[i]>0)
    sum += arr[i];
}
ll s = 0;
ll dp[n];
ll ded = 0;
ll neg = 0;
for (i = n - 1; i >= 0;i--)
{
if(arr[i]<0)
    s += arr[i];
dp[i] = s;
}
for (i = 0; i < n;i++)
{
if(arr[i]>0)
{
if(ded<0)
    ded = 0;
    if(ded>0)
{
    dp[i] += ded;
}
    sum -= (min(arr[i], abs(dp[i])));
    ded += (min(arr[i], abs(dp[i])));



}
else
{
    if(ded!=0)
{
    ded += arr[i];
}
}

}
cout << sum << endl;
}
 return 0;
}