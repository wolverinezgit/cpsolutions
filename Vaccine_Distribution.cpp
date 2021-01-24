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
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll n;
    double z;
    ll c = 0;
    cin >> n>>z;
    ll arr[n];

    for (i = 0; i < n;i++)
{
    cin >> arr[i];
if(arr[i]<=9||arr[i]>=80)
    c++;

}
cout << ceil((double)(c) / z) + ceil((double)(n - c) / z) << "\n";
}
 return 0;
}