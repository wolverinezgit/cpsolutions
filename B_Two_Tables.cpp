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
ll n1,m1,n2,m2;
cin >> n1 >> m1;
string a[n1];
for (i = 0; i < n1;i++)
{
        cin >> a[i];
}
cin >> n2 >> m2;
string b[n2];

map<string, ll> map1;
for (i = 0; i < n2; i++)
{
    
        cin >> b[i];
}
for (i = 0; i < n1;i++) 
{
    for (j = 0; j < m1;j++)
{
    for (ll k = 0; k < n2;k++)
{
    for (ll l = 0; l < m2;l++)
{
if(a[i][j]=='1'&&b[k][l]=='1')
{

    string s1 = (to_string)(k - i);
    string s2 = (to_string)(l-j);
    s1 += s2;
    map1[s1]++;
}
}
}
}
}

string rem;
for(auto x:map1)
{
    
    if (x.second >= mx)
    {
        mx = x.second;
        rem = x.first;
}

}
if(rem[0]=='-')
{
    cout << rem.substr(0, 2) << " ";
if(rem[2]=='-')
    cout << rem.substr(2, 2);
else
{
    cout << rem[2];
}

}
   
else
{
    cout << rem[0] << " ";
if(rem[1]=='-')
    cout << rem.substr(1, 2);
else
{
    cout << rem[1];
}

}



    return 0;
}