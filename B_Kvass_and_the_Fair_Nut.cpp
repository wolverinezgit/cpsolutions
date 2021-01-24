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
 ll s;
 cin >> n >> s;
 ll sum = 0;
 ll arr[n];
 for (i = 0; i < n; i++)
 {
     cin >> arr[i];

}

for (i = 0;i<n;i++)
{
    sum += arr[i];

}
if(sum>=s)
    cout << arr[0] << endl;
else
{
    if(sum+arr[0]>s)
cout<<sum+arr[0]-s<<endl;
else
{
    cout << -1 << endl;
}

}

    return 0;
}