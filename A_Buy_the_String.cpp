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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,c0=0,c1=0,h;
 cin >> t;
while(t--)
{
 cin >> n>>c0>>c1>>h;

 string s;
 cin >> s;
 ll z = 0, o = 0;
 for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
    z++;
else
{
    o++;
}
}
cout << min((z*c0)+(o*c1),min(z * c0 + (o * (c0 + h)), z * (c1 + h) + (o * (c1))));
cout << endl;
}
 return 0;
}