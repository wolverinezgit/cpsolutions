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
cin>>n;
string s;
char c = 'z';
ll idx = 1;
cin >> s;
vector<pair<string,ll>> v;
ll p = n;
for (i = 0; i < n;i++)
{
    string str = s.substr(i, p - i);
if(n%2)
    str += (s.substr(0, i));
    v.pb(mp(str,i+1));
}
sort(v.begin(), v.end());
cout << v[0].first << "\n"
     << v[0].second << "\n";
}




 return 0;
}