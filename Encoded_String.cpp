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
    cin >> n;
    string s,str;
    cin >> s;
    for (i = 0; i < s.length();i=i+4)
{
    int num = 0, p = 0;
    for (j = i + 3; j >= i;j--)
{
    num += (s[j] - '0') * pow(2, p++);
}
str = str + (char)(97 + (num));
}
cout << str << endl;
}
 return 0;
}