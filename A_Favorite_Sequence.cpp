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
for (i = 0; i < n;i++)
    cin >> arr[i];
ll l = 0, r = n - 1;
if(n==1)
    cout << arr[0];
else
{
    while (l <= r)
    {
        if (l < n)
            cout << arr[l++] << " ";
if(l-1==r)
    break;
        if (r >= 0)
            cout << arr[r--] << " ";
    }
}


cout << endl;
}
 return 0;
}