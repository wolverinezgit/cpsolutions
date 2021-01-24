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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,sum=0;
 cin >> n;
 ll arr[n];
 for (i = 0; i < n;i++)
{
    cin >> arr[i];


}
ll p1 = 0, p2 = n - 1;
vector<ll> v;

for (i = 0; i < n;i++)
{
if(arr[p1]>arr[p2])
{
    v.pb(arr[p1]);
p1++;
}
else
{
    v.pb(arr[p2]);
    p2--;
}

}
for (i = 0; i < v.size();i=i+2)
{
    sum += v[i];

}
cout << sum << endl;

return 0;
}