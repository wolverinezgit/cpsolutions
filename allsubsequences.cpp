#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second


#define pob pop_back
#define pf push_front
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<string> v;
void asub(string s,string sub,ll n)
{
if(s.length()==0)
{
    v.pb(sub);
    return;
}
else
{
    asub(s.substr(1), sub + s[0], n);
    asub(s.substr(1), sub, n);
}


}

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
string s;
cin >> s;
n = s.length();
string str;
asub(s, " ", n);
for (i = 0; i < v.size(); i++)
    cout
        << v[i] << endl;
return 0;
}