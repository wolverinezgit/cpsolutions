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
 ll t,i,n,flag0=0,flag1=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    cin >> n;
    string s;
    cin >> s;
    string str1, str2;
    ll j = 0, k = 0;
    string str = "2020";
    ll f = 0,ff=0,gap=0;
    j = 0;
    ll p = 0;
    for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
    p++;
else
{
    break;
}


}
for (j = 0; j <= 4;j++)
{
    if (s.substr(0,j)==str.substr(0,j)&&s.substr(n-4+j,n)==str.substr(j,4))
        f = 1;
}
  

        if (f == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }



}

 return 0;
}