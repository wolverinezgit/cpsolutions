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
 ll t,i,j,flag=0,c=0,n;
 cin >> n;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr[i];
 vector<ll> v;
 for (i = 0; i < n-1 ;i++)
{
   if(arr[i]>arr[i+1])
      { flag++;
          c = i;
      }
}


if(flag==0)
    cout << 0 << endl;
else if(flag==1)
{
   
    cout << n - (c + 1);



}
else
{
    cout << -1;
}




     return 0;
}