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
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     ll a;
    
     cin >> n >> a;
     ll c = 0;
     while (n != 0)
     {
if(n<=a)
{
if(n==a)
{
    c += 2;
    break;
}
else
  {  c++;
    break;
  }
}
if(n%a==0)
{

    a++;
    if(a>n)
{
    c += 2;
    break;
}
else
{
    c += 2;
    n = n / a;
}

}
else
{
    c++;
    n /= a;
}

}
cout<<c<<endl;
}


 return 0;
}