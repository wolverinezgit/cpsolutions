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
 cin >> n;
map<string,ll> m;
for (i = 1; i <= n;i++)
{
string s;
cin >> s;
m[s]++;
}
string str;
for(auto x:m)
{
if(x.first[0]!='!')
{
if(m.find("!"+x.first)!=m.end())
    {

flag = 1;
 str = x.first;
break;

}
}
}
if(flag==1)

    cout << str << endl;
else
{
    cout << "satisfiable" << endl;
}



    return 0;
}