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
 ll m;
 cin >> n >> m;
 ll a[n], b[m];
 ll sum = 0;
 for (i = 0; i < n;i++)
     cin >> a[i];
 for (i = 0; i < m;i++)
     cin >> b[i];
 sort(a, a + n);
 sort(b, b + m);
 ll z = 0;
 sum += max(n-m, z);
 j = 0;
 for (i = 0; i < min(m, n);i++)
{

if(j<m&&b[j]>=a[i])
{
    j++;
    
}
else
{
    for (j = j + 1; j < m;j++)
{
if(b[j]>=a[i])
{
    
    j++;
    flag = 1;
    break;
}

}
if(flag==0)
    sum++;
flag = 0;
}

}
cout<<sum<<endl;
     return 0;
}