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
 cin >> n;
 vector<pair<ll, ll>> v;

 for (i = 0; i < n;i++)
{
double  p;
    cin >> p;


        v.pb(mp(ceil((p-i)/n), i + 1));

    

}
sort(v.begin(), v.end());
cout << v[0].second << endl;
return 0;
}