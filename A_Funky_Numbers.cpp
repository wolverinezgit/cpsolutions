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

 long long int p;
 cin >> p;
 vector<ll> v;
 for (i = 1; i < 100000;i++)
{
    v.pb(((i) * (i + 1)) / 2);

}
for (i = 0; i < v.size();i++)
{
if(binary_search(v.begin(),v.end(),p-v[i]))
{
    flag = 1;
    break;

}
}
if(flag==1)
    cout << "YES" << endl;
else
{
    cout << "NO" << endl;
}

    return 0;
}