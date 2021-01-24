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
 cin >> t;
while(t--){


string s;
cin >> s;
ll o1 = 0, o2 = 0, c1 = 0, c2 = 0;
ll flag1 = 0, flag2 = 0;
for (i = 0; i < s.length();i++)
{

if(s[i]=='[')
    o1++;
if (s[i] == ']')
    c1++;
if (s[i] == '(')
    o2++;
if (s[i] == ')')
    c2++;
if (c1 > o1)
    c1--;
if (c2 > o2)
    c2--;
}

 
    cout << min(c1, o1) + min(c2, o2) << endl;


}
 return 0;
}