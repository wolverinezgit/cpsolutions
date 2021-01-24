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
    ll n1, m1;
    cin >> n1 >> m1;
    ll c = 0;
    for (i = 0; i < n1-1;i++)
{
    string s;
    cin >> s;
 if(s[s.length()-1]!='D')
     c++;
}
string s;
cin >> s;
for (i = 0; i < s.length() - 1;i++)
{
if(s[i]!='R')
    c++;

}
cout << c << endl;
}
 return 0;
}