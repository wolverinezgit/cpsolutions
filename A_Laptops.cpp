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
 ll n,i,j,flag=0;
 cin >> n;
 vector < pair<ll, ll>> v;
 for (i = 0; i < n;i++)
{
    ll p1,p2;
    cin >> p1>>p2;
    v.pb(mp(p1, p2));

}
sort(v.begin(), v.end());
for (i = 0;i<n-1;i++)
{
if(v[i].second>v[i+1].second)
    flag = 1;


}
if(flag==1)
    cout << "Happy Alex" << endl;
else
{
    cout << "Poor Alex" << endl;
}

    return 0;
}