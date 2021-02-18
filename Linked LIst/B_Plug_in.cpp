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
 string s;

 cin >> s;
 ll n = s.length();
 stack<char> st;
 ll i;
 for (i = 0; i < n;i++)
{
  if(st.empty())
      st.push(s[i]);
else
{
    if(st.top()==s[i])
{
    st.pop();
}
else
{
    st.push(s[i]);
}

}

}
string str;
while(!st.empty())
{
    str += st.top();
    st.pop();

}
reverse(str.begin(), str.end());
cout << str;
cout << endl;
return 0;
}