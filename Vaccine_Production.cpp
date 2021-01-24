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
 ll d1, v1, d2, v2,v,p=0,sum=0;
 cin >> d1 >> v1 >> d2 >> v2 >> v;
 i = min(d1, d2);
 while(sum<v)
{
if(i>=d1)
{
    p += (v1);

}
if(i >= d2)
{
    p += v2;
}
i++;
sum = p;
}
cout << i-1<<"\n";
return 0;
}