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
while(t--){
    double k;
    double n;
    ll k1;
    cin >> n >> k;
    k1 = k;
    if (n > k)
    {

        double z = (ceil)(n / k);
        k = k * z;
        k1 = k;
}

   if (k1 % (ll)(n) == 0)
       cout << (ll)(k1/ n) << endl;
   else
       cout << (ll)((k1/ n) + 1) << endl;


}
 return 0;
}