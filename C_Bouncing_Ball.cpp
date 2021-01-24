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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,z;
 cin >> t;
while(t--){
    ll x, y, p, k;
    cin >> n >> p >> k;
    string s;
    cin >> s;
    cin >> x >> y;
    ll sum1 = 0, sum2 = 0;

    mn = 1e9+7;

    for (z = 0; z < n; z++)
    {

        sum2 = 0;
        i = z + p - 1;
        while (i < n)
        {
            if (s[i] == '0')
            {
                sum2 += x;
            }
            i += k;
        }
        mn = min(sum2 + (y * z), mn);
      

}
cout << mn<< endl;
}
 return 0;
}