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
 cin >> n;
ll arr[n];
ll sum = 0;
for (i = 0; i < n;i++)
    cin >> arr[i];
for (i = 0; i < n;i++)
{
    ll left = -1, right = n;
    
        left = i - 1;

    right = i + 1;
while(left>=0)
{
if(arr[left]<=arr[left+1])
{
    sum++;
    left--;

}
else
    break;

}
while(right<n)
{
    if (arr[right]<=arr[right-1])
    {
        sum++;
        right++;
    }
else
{
    break;
}

}
mx = max(mx, sum+1);
sum = 0;
}
cout << mx;
return 0;
}