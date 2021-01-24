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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> n;
 vector < pair<ll, ll>> v;
 stack<ll> st;
 for (i = 0; i < n;i++)
     {
         ll z;
         cin >> z;
         v.pb(mp(z, i + 1));


}
ll p1 = 0, c1 = 0, c2 = 0,p2=n-1;
sort(v.begin(), v.end());
string s;
cin >> s;

for (i = 0; i < s.length();i++)
{
if(s[i]=='0')
{
    c1++;
    st.push(v[c1-1].second);
    cout << st.top() << " ";
}
else
{
    cout << st.top() << " ";
    st.pop();
}




}


    return 0;
}