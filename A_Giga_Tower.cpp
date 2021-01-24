#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 ll t,i,j,flag=0;
 ll n;
 cin >> n;

 for (i = 1; i <= 20;i++)
{
    ll a = n + i;
if(a<0)
    a = -a;
while(a)
{
if((a%10)==8)
{
    flag = 1;
break;

}
a =a/ 10;
}
if(flag==1)
{
    cout << i;
    return 0;
}


}

     return 0;
}