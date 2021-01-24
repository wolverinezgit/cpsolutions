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
 ll t,i,j,flag=0;
 cin >> t;
 map<string, int> m;
 while (t--)
 {
     string str;
     cin >> str;
     m[str]++;


}
ll prev = 0;
string s;
for(auto x:m)
{
if(x.second>prev)
    s = x.first;
prev = x.second;

}
cout << s;
return 0;
}