#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

#define f first

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
    ll m;
    cin >> m >> n;
    string s[m];
    for (i = 0; i < m;i++)
        cin >> s[i];
    ll c = 0, lc = 1;
    for (i = 0; i < m;i++)
{
    for (j = 0; j <n;j++)
{
    ll k1 = i,k2=j,k3=j;
    for (k1 = i; k1 < m;k1++)
    {
if(k2<n&&k3>=0)
{
   
    if (s[k1][k2] == '*' && s[k1][k3] == '*')
    {
        for (ll z = k2; z <= k3;z++)
{
if(s[k1][z]!='*')
    flag = 1;

}
if(flag==0)
            c++;
flag = 0;

k2++;
k3--;
        }
else
{
    break;
}
}

}

}
}
cout << c << endl;

}
 return 0;
}