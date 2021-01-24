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
    ll k;
    ll f1 = 0, f2 = 0;
    cin >> n>>k;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
}
    
ll sum1 = 0, sum2 = 0;
sort(arr, arr + n, greater<ll>());
ll z1 = 0, z2 = 0;
sum1 += arr[0];
z1++;
for (i = 1; i < n;i++)
{
if(sum1>sum2&&sum2!=k)
{
    sum2 += arr[i];
    z1++;
}
else if(sum2>=sum1&&sum1!=k)
{
sum1+=arr[i];
z1++;
}
}

if(sum1>=k&&sum2>=k)
{

    f1 = 1;
}
sum1 = 0, sum2 = 0;
sum2+=arr[0];
z2++;
for (i = 1; i < n; i++)
{
    if (sum1 > sum2 && sum2 < k)
    {
        sum2 += arr[i];
        z2++;
    }
    else if (sum2 >= sum1 && sum1< k)
    {
        sum1 += arr[i];
        z2++;
    }
}
if (sum1 >= k && sum2 >= k)
{

    f2 = 1;
}
cout << f1 << " " << f2 << "\n";
if(f1==1&&f2==1)
{
    cout << min(z1, z2)<<"\n";
}
else
{
    if(f1==1)
        cout << z1 << "\n";
else if(f2==1)
{
    cout << z2 << "\n";
}
else
{
    cout << -1 << "\n";
}

}

}
 return 0;
}