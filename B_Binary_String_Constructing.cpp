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
 ll a, b, x;
 cin >> b >> a >> x;
 ll a1 = max(a, b);
 ll b1 = min(a, b);
 string s;

    if(x%2)
{
    for (i = 1; i <= x + 1;i++)
{
    if(i%2)
        s += '1';
else
{
    s += '0';
}

}
a1 = a1 - ((x + 1) / 2);
b1 = b1 - ((x + 1) / 2);
}
else
{
    for (i = 1; i <= x; i++)
    {
        if (i % 2)
            s += '1';
        else
        {
            s += '0';
        }
    }
if(x>0)
{


    a1 = a1 -(x/2);
    b1 = b1 - (x / 2);
}
}

string s1;
string s0;
for (i = 1; i <= a1;i++)
{
    s1+='1';
}
for (i = 1; i <= b1; i++)
{
    s0 +='0';
}
if(x%2==0)
{
if(b1==0)
    s = s + s1;
else
    s = s0 + s1 + s;
}
else
{
    s = s1 + s + s0;
}
if(b>a)
{
    for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
    cout << 1;
else
{
    cout << 0;
}

}
cout << endl;
}
else
cout << s << endl;

return 0;
}