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
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 double n, k;
 cin >> n >> k;
 cout << floor(log(k) / log(n)) << " " << ceil(log(k) / log(n)) <<endl;
 if ((floor(log(k) / log(n))) == (ceil(log(k) / log(n))))
{cout<<"YES"<<endl;
 cout << (log(k) / log(n))-1 << endl;}
 else
 {
     cout << "NO";

}

     return 0;
}