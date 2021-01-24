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
 ll t,i,n,j,flag1=0,flag2=0,mx=0,mn=1e9+7;
ll m;
cin >> n >> m;
ll d;
cin >> d;
for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
{
    cin >> arr[i][j];
    mx = max(arr[i][j], mx);
    mn = min(mn, arr[i][j]);

}
        
}
for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
{
if((mx-arr[i][j])%d!=0)
    flag1 = 1;
else
{
    sum1 += (mx - arr[i][j]) / d;
}

if (( arr[i][j]-mn) % d != 0)
    flag2 = 1;
else
{
    sum2 += (arr[i][j]-mn) / d;
}
}
}
if(flag1==1&&flag2==1)
    cout << -1;
else
{
    if(flag1!=flag2)
{



}
}

    return 0;
}