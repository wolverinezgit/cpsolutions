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
 cin >> t;
while(t--){
    ll n;
    cin >> n;
    flag = 0;
    ll flag1 = 0;
    sum = 0;
    for (i = 1; i <= 10000;i++)
{
    sum += i;
if(sum==n)
{
    flag1 = 1;
    break;
}
if(sum>=n)
{
    flag == 1;
    break;

}

}
if(flag1==1||n-3<0)
{
    cout << i + abs(sum - n) << endl;
}

else
{
    cout << min(n - 1,i + abs(sum - n)) << endl;
}

}
 return 0;
}