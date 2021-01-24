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
 ll n,t;
 cin >>n>> t;
string s;
cin >> s;
ll p = n-1;
char arr[s.length()]={' '};
ll i;
while(t--)

{
for (i = 0;i<s.length()-1;i++)

{
if(s[i]=='B'&&s[i+1]=='G')
{
    s[i] = 'G';
    s[i + 1] = 'B';
    i++;

}

}
}
for (i = 0; i < s.length();i++)
{
    cout << s[i];


}
    return 0;
}