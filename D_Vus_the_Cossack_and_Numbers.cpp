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
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
 double arr[t];
 vector<ll> p1;
 vector<ll> n1;
 vector<ll> p2;
 vector<ll> n2;
 ll sump1 = 0, sumn1 = 0,sump2=0;
 for (i = 0; i < t;i++)
     {
         cin >> arr[i];
if(arr[i]>=0)
{
    
    double d = ceil(arr[i]);
   
    sump1 += d;
    p1.pb(d);
  
}
else
{
    double q1 = ceil(arr[i]);
  

    sumn1 += q1;

    n1.pb(q1);
  
}

}
sumn1 = -sumn1;



}
    return 0;
}