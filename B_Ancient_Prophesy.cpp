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

    string s;
    cin >> s;
    map<string, ll> m1;
    string st,str;
    ll p1=-1, p2=-1;
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = 2; i < s.length() - 7; i++)
    {
        p1 = -1, p2 = -1;
        if (s[i] == '-' && s[i + 3] == '-')
        {
if(s[i+1]!='-'&&s[i+2]!='-')
             p1 = (s[i+1] - '0') * 10 + (s[i + 2] - '0');
             str = s.substr(i + 4,4);
if(s[i-1]!='-'&&s[i-2]!='-')
             p2 = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');


if ((str == "2013" || str == "2014" || str == "2015") && p1 <= 12 && p1 != -1 && p2 != -1 && p2 > 0 && p2 <= arr[p1])
{
    flag = 1;
    st = s.substr(i - 2, 10);
    m1[st]++;
            }
        }
    }
if(flag==1)
{
    string s1;
    for (auto x : m1)
    {
        if(x.second>mx)
{
            mx = x.second;
            s1 = x.first;

}

}
cout << s1 << endl;
}
else
{
    cout << -1 << endl;

}


 return 0;
}