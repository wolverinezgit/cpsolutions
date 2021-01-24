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
 ll t,i,n,j,k,flag=0,mx=0,mn=1e9+7,c=0;
 cin >> t;
while(t--){

    cin >> n >> k;
    map<ll, ll> m;
    ll arr[n];
    for (i = 0; i < n;i++)
{
        cin >> arr[i];

}

for (i = 1; i <= 100;i++)
{
    c = 0;
    for (j = 0; j < n;j++)
{
if(arr[j]==i)
    continue;
else
{
    c++;
    j += (k - 1);

}


}
mn = min(c, mn);
}

cout << mn << endl;
mn=1e9+7, mx = 0, c = 0;
}

return 0;
}