#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
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
    cin >> n;
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll lose = 0;
    for (i = 0; i < s.length();i++)
{

    if (s[i] == 'L' && s[i] == 'W')
    {
if(k>0)
{
    sum += 3;
    k--;
    s[i] = 'W';
    s[i + 1] = 'W';
}
else
{
    sum += 1;

}

      
    }

 else if (s[i] == 'W' && s[i] == 'L')
{
    sum += 3;
    k--;

}
else if(s[i]=='W'&&s[i+1]=='W')
{
    sum += 3;
}
else
{
    lose += 2;
}

}
    }
 return 0;
}