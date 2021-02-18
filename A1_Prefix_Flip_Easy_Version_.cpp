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
 string invert(string s)
{
    string str;
    ll i;
    for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
    str += '1';
else
{
    str += '0';
}

}
reverse(str.begin(), str.end());
return str;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     vector<ll> v;
     string s1, s2;
     cin >> n;
     cin >> s1 >> s2;
    //  cout << invert(s1) << endl;
     i = s1.length() - 1, j = s2.length() - 1;
     for (i = s2.length()-1; i >= 0;i--)
{
if(s2[i]!=s1[j])
{
   if(s1[0]==s2[i])
{
    v.pb(1);
if(s1[0]=='0')
{
    s1[0] = '1';
}
else
    s1[0] = '0';
v.pb(j + 1);
string s3 = invert(s1.substr(0, j + 1));
string s4 = s1.substr(j + 1);
s1 = s3 + s4;
j--;
}
else
{
    v.pb(j + 1);
    string s3 = invert(s1.substr(0, j + 1));
    string s4 = s1.substr(j + 1);
    s1 = s3 + s4;
    j--;
}
}
else
{
    j--;
}


}
    cout<<v.size()<<" ";
for(ll x:v)
    cout << x << " ";
cout << endl;
}


 return 0;
}