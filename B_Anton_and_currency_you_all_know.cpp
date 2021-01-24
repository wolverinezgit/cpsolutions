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
 ll t=-1,i,j,flag=0,mx=0,z=-1;
 string s;

 cin >> s;
 flag = (s[s.length() - 1])-'0';
 for (i = 0; i <s.length()-1;i++)
{
    j = s[i] - '0';
    if ((j) % 2 == 0)
    {
       if(flag>j)
{
        t = i;
       break;
}
else
{
    mx = j;
    z = i;
}


}
}
if((t==-1) && (z==-1))
    cout << -1;
else if(t!=-1)
{
    s[s.length() - 1] = (j + '0');
    s[i] = flag+'0';
    cout << s;
}
else
{
    char ch = s[s.length() - 1];
    s[s.length() - 1] = (mx + '0');
   
    s[z] = ch;
    cout << s;
}


  


return 0;
}