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
string ans = " ";
ll cnt = 0;
ll f = 0;
ll n;
ll c1 = 0;
void solve()
{
    

string s;
cin >> s;
if(s=="pair")
{
    ans += s;
    ans += "<";
    cnt= 2;
}
else
{
if(cnt==0)

{
if(c1==0)
{
    ans += "int";
    c1++;
    n--;
}
else
{
    f = 1;
    n--;
}

   
}
else if(cnt==1)
{
if(n==1)
    ans += ",int>";
else
{
    ans += "int>";
    cnt--;
    c1++;
    n--;
}
}
else
{
    ans += "int,";
    cnt--;
    c1++;
    n--;
}


}
if(n<=0)
    return;
solve();
}


int main()
{
 fast_cin();
 cin >> n;
 solve();
if(f==0&&cnt==0)
    cout << ans << endl;
else
{
    cout << "Error occured" << endl;
}

 return 0;
}