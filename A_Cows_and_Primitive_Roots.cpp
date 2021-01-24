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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,c=0;
 cin >> n;
 for (i = 1; i < n;i++)
{
    for (j = 1; j <= i - 2;j++)
{
if(((int)pow(j,i)-1)%n!=0)
{
    flag = 1;

}
if (flag == 0 && ((ll)pow(j, n-1) - 1) % n == 0)
{
    c = (c + 1) % n;
}
}
flag = 0;
}
cout << c << endl;
return 0;
}