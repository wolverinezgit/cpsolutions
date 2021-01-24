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
 ll t,i,j,flag=0;
 string s1, s2;
 cin >> s1 >> s2;
 string f1;
 string f2;
 for (i = 0; i < s1.length();i++)
{
if(s1[i]!='0')
    f1=f1+(s1[i]);

}
for (i = 0; i < s2.length(); i++)
{
    if (s2[i] != '0')
        f2=f2+(s2[i]);
}
int a = stoi(s1);
int b = stoi(s2);
int c = stoi(f1);
int d = stoi(f2);
int z = a + b;
int z1 = c + d;
string rz1 = to_string(z1);
string rz=to_string(z);
string f3;
for (i = 0; i < rz.length(); i++)
{
    if (rz[i] != '0')
        f3 = f3 + (rz[i]);
}

if (rz1==f3)
    cout
        << "YES";
else
{
    cout << "NO";
}

     return 0;
}