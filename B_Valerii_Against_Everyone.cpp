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
 ll t,i,j,flag=0;
 cin >> t;
while(t--){
ll n;
ll flag = 0;
cin>>n;
map<ll,ll> m;
ll arr[n];
ll p[n];
ll s[n];
for (i = 0; i < n;i++)
{
    cin >> arr[i];
    m[arr[i]]++;

}
for(auto x:m)
{
if(x.second>=2)
    flag = 1;

}
if(flag==1)
    cout << "YES" << endl;
else
{
    cout << "NO" << endl;
    
}
}
 return 0;
}