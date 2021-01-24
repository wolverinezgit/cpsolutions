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
cin>>n;
string s1;
string s2;
cin >> s1 >> s2;


ll r = 0, b = 0;
for (i = 0; i < s1.length();i++)
{

if(s1[i]>s2[i])
{
r++;

}
else if(s2[i]>s1[i])
{
    b++;
    break;
}
}
if(r>b)
    cout << "RED" << endl;
else if(b>r)
    cout << "BLUE" << endl;
else
{
    cout << "EQUAL" << endl;
}

}
 return 0;
}