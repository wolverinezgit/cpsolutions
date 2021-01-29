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
ll f = 0;
ll arr[n];
ll f1 = 0, f2 = 0;
for (i = 0; i < n;i++)
    cin >> arr[i];
for (i = n - 2; i >= 0;i--)
{
if(arr[i]<arr[i+1])
{
    f1= 1;
    break;
}

}
for (; i >= 0;i--)
{
if(arr[i]>arr[i+1])
{
    f2 = 1;
    break;

}
}
if(f2==1&&f1==1)
    cout << i + 1 << endl;
else
{
    cout << 0 << endl;
}

}
 return 0;
}