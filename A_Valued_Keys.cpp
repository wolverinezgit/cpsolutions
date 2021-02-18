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
 string s1,s2;
cin>>s1>>s2;
string s3;
ll f = 0;
ll i;
for(i=0;i<s1.length();i++)
{
if(s1[i]>=s2[i])
    s3.pb(s2[i]);
else
{
    f = 1;
}

}
if(f==1)
    cout << -1 << endl;
else
cout << s3 << endl;

return 0;
}