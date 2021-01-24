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
    ll arr[n];
    ll sum = 0;
    for (i = 0; i < n;i++)
{
    cin >> arr[i];
    sum += arr[i];
}
ll arr1[n];
ll arr2[n];
ll sum1 = 0, sum2 = 0;
for(i=0;i<n;i++)
{
if(arr[i]==1)
{
    arr1[i] = 1;
}
else if(i%2)
    arr1[i] = arr[i];
else
{
    arr1[i] = 1;
}

sum1 += abs(arr1[i] - arr[i]);
}
for (i = 0; i < n; i++)
{
    if (arr[i] == 1)
    {
        arr2[i] = 1;
    }
    else if (i % 2==0)
        arr2[i] = arr[i];
    else
    {
        arr2[i] = 1;
    }
    sum2 += abs(arr2[i]-arr[i]);
}
if((sum-sum1)<(sum-sum2))
{
    for (i = 0; i < n;i++)
        cout << arr2[i] << " ";
}
else
{
    for (i = 0; i < n; i++)
        cout << arr1[i] << " ";
}
cout << endl;
}

 return 0;
}