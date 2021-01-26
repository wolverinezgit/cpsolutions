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
 cin >> t;
while(t--){
string s;
cin >> s;
ll u = 0, l = 0, n = 0,sp=0;
ll flag = 0;
for (i = 0; i < s.length();i++)
{
    if (s[i] >= 'a' &&s[i] <= 'z')
        l++;
}
    for (i = 1; i < s.length() - 1; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
            u++;
        if ((s[i]-'0') >= 0 && (s[i]-'0') <= 9)
            n++;
        else if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
        {
            sp++;
        }
    }

if(l==0||n==0||sp==0||u==0)
    flag = 1;
if(s.length()<10)
    flag = 1;
if(flag==1)
    cout << "NO" << endl;
else
{
    cout << "YES" << endl;
}

}
 return 0;
}
_NATIVE_WCHAR_T_DEFINED