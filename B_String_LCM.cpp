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
    string s1, s2;
cin>>s1>>s2;
ll x1 = s1.length();
ll x2 = s2.length();
ll lcm = (x1 * x2) / (__gcd(x1, x2));
string s3,s4;
for (i = 1; i <=lcm / x1;i++)
{
    s3 += s1;
}
for (i = 1; i <= lcm / x2; i++)
{
    s4 += s2;
}
if(s3==s4)
    cout << s3 << "\n";
else
{
    cout << -1 << "\n";
}

}
 return 0;
}