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

#define pf pop_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll sum = 0;
    ll arr[n];
    for (i = 0; i < n;i++)
{
    cin >> arr[i];

}
if(arr[0]>arr[1])
    arr[0] = arr[1];
else
{
    arr[1] = arr[0];
}
for (i = 2; i < n;i++)
{
    sum += (arr[0] -(sum+ arr[i]));


}
cout << sum << endl;
}
 return 0;
}