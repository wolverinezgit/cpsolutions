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
 cin >> t;
while(t--){
    ll x, y, z;
    cin >> x >> y >> z;
    ll sum = x + y + z;

    ll d = sum / 9;
    if (sum % 9 == 0 && x>= d && y>=d&&z>=d)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
}

}
 return 0;
}