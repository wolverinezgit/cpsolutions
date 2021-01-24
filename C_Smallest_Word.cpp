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
 string s;
 cin >> s;
 char c = s[0];
 vector<ll> v;

 for (i = 0; i < s.length();i++)
{
string str=s.substr(0,i+1);
string s1 = str;
reverse(s1.begin(), s1.end());
if(flag==1)
    break;
if (s1.compare(str)<0)
{
    
    v.pb(1);
    flag = 1;
}
else
{
    v.pb(0);
}

}

    for (i = 0; i < v.size();i++)
        cout << v[i] << " ";
    for (i = v.size()+1; i <= s.length();i++)
{
    cout << 0 << " ";
}

        return 0;
}