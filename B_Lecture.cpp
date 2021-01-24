#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void solve(){
}
int main()
{
 fast_cin();
 ll t,n,i;
 cin >> t>>n;
 map <string, string> mp;

 for (i = 0; i < n;i++)
{
    string str,s;
    cin >> str>>s;
    mp[str] = s;



}
for (i = 0; i < t;i++)
{
    string p;
    cin >> p;
if(mp[p].length()<p.length())
    cout << mp[p] << " ";
else
{
    cout << p << " ";
}


}
cout << endl;
return 0;
}