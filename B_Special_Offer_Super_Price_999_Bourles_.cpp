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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,lc=0,c=0;
 unsigned long long int p1, q;
 string nine = "9999999999999999999";
 string p;
 cin >> p >> q;

 string s;
 n = p.length();
 ll c1 = 0, c2 = 0;
 ll prev=p;
 ll z = 1;
 string str;
 string ch;
 for (z = 1; z <= n;z++)
 {
     str = nine.substr(0, z);
     ch = s.substr(n - z - 1, 1);
if(ch=='0')
{


}
     prev = ((prev / (ll)(pow(10, z+1)))*pow(10,z)) + (stoi)(str);
     if(prev>p-q)
{
    mx = max(prev, mx);
}
     

}
string s1 = (to_string)(p);
string s2 = (to_string)(mx);
for (i = s1.length() - 1; i >= 0;i--)
{
if(s1[i]=='9')
    c1++;
else
{
    break;
}

}
for (i = s2.length() - 1; i >= 0; i--)
{
    if (s2[i] == '9')
        c2++;
    else
    {
        break;
    }
}
if(c1>=c2)
    cout << s1 << endl;
else
{
    cout << s2 << endl;
}

  
return 0;
}