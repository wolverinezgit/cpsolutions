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
    ll q;
    cin >> n >> q;

    vector<ll> o;
    vector<ll> z;
    string s;
    cin >> s;
    for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
    z.pb(i);
else
{
    o.pb(i);
}



}
while(q--)
{

    ll a, b;
    cin >> a >> b;
    string str;
    ll p = 0;
    for (i = 0; i < a -1;i++)
{
if(s[i]==s[a-1])
    flag = 1;

}
for (i = b; i < s.length();i++)
{
if(s[i]==s[b-1])
    flag = 1;
}


    if (flag == 1)
        cout << "YES"
             << endl;
    else
    {
        cout << "NO" << endl;
    }
flag = 0;
p = 0;
}
}
 return 0;
}