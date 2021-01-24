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
ll x;
cin >> x;
ll arr[n];
for (i = 0; i < n;i++)
    cin >> arr[i];
ll temp;
ll sum = 0;
mn = 1e18 + 7;
for (i = 0;i<n;i++)
{
    ll p = 0;
    temp = arr[i];
    while (temp % 2 == 0 &&temp!=0)
    {
        temp /= 2;
        p++;
}
if(p<mn)
{
mn=p;
j = i;
}
}

for (i = 0; i < n;i++)
{

if(i<j)
{
    sum += (arr[i] * (mn + 2));
}
else
{
    sum += (arr[i] * (mn+1));
}

}
cout << sum << endl;
}
 return 0;
}