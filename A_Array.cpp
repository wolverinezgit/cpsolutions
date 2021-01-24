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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
 ll arr[t];
 ll sum = 1;
 for (i = 0; i < t;i++)
{
     cin >>arr[i];
if(arr[i]==0)
    flag = 1;
}

 vector<ll> v1;
 vector<ll> v2;
 vector<ll> v3;
 for (i = 0; i < t;i++)
{
if(arr[i]!=0)
{

    v1.pb(arr[i]);
    sum *= arr[i];
}

}
if(sum>0)
    v1.pb(-1);

    v3.pb(0);
v2.pb(1);
for (i = v1.size()-1; i>=0 ; i--)
    cout << v1[i] << " ";
cout << endl;

for (i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";
cout << endl;
for (i = 0; i < v3.size();i++)
    cout << v3[i] << endl;
    return 0;
}