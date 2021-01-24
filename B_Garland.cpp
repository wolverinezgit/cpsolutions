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
 
 string s1, s2;
 cin >> s1 >> s2;
 
 ll a[26] = {0};
 ll b[26] = {0};
 ll sum = 0;
 ll f = 0,z=0;
 for (i = 0; i < s1.length();i++)
{
    a[s1[i] - 'a']++;
}
for (i = 0; i < s2.length(); i++)
{
    b[s2[i] - 'a']++;
}
for (i = 0;i<26;i++)
{
if(b[i]>0&&a[i]==0)
    f = 1;
    sum += min(a[i], b[i]);
if(min(a[i],b[i])>1)
    z = 1;
    a[i] -= min(a[i], b[i]);

}
for (i = 0; i < 26;i++)
{
if(a[i]!=0)
{
    flag=1;
}

}
if(sum==0||f==1)
    cout << -1;

else if(flag==1||sum==1||z==0)
    cout << sum;
else
    cout << sum;

    return 0;
}