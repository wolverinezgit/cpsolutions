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
 ll s1 = 0, s2 = 0;
 vector<ll> f;
 vector<ll> s;
 vector<ll> v;
 while (n--)
 {
     ll p;
     cin >> p;
     v.pb(p);
     if (p > 0)
     {
         s1 += p;
         f.pb(p);
}
    else
    {
        s2=s2+abs(p);
        s.pb(abs(p));
}


}

if(s1==s2)
{
    for (i = 0; i < min(f.size(), s.size());i++)
{
if(s[i]>f[i])
{
    cout << "second";
    flag = 1;
    break;


}
else if(s[i]<f[i])
{
cout<<"first";
flag = 1;
break;
}
}
if(flag==0)
{
if(v[v.size()-1]>0)
    cout << "first";
else
    cout << "second";

}
}
else if (s1>s2)
{
    cout << "first";
    flag = 1;
}
else if (s2>s1)
{
    cout << "second";
    flag = 1;
}
 return 0;
}