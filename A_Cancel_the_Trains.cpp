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
    ll n1, n2,c=0,z=0;
    cin >> n1 >> n2;
    map<ll, ll> m;
    for (i = 0; i < n1;i++)
{
cin>>z;
    m[z]++;
}
    for (i = 0; i < n2;i++)
{
    cin >> z;
    m[z]++;

}
for(auto x:m)
{
if(x.second==2)
    c++;

}
cout << c << endl;
}
return 0;
}