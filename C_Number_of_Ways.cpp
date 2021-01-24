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
 ll c = 0;
 ll arr[n];
 ll sum = 0;

 for (i = 0; i < n;i++)
{
     cin >> arr[i];
 sum += arr[i];
}
if(sum%3!=0)
    flag = 1;
ll sum1 = 0;
ll cnt[n]={0};
for (i = n - 1; i >= 0;i--)
{
    sum1 += arr[i];
if(sum%3==0&&sum1==sum/3)
{

    cnt[i] = 1;

}
}
for (i = n - 2; i >= 0;i--)
{
    cnt[i] += cnt[i + 1];
}

cout << endl;
sum1 = 0;
for (i = 0; i <n-2;i++)
{
    sum1 += arr[i];
if(sum%3==0&&sum/3==sum1)
{
    c += cnt[i + 2];

}
}
if(flag==1)
    cout << 0 << endl;
else
cout << c << endl;
return 0;
}