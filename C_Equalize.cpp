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
 ll n;
cin>>n;
ll i;
string s1, s2;
ll sum = 0;
cin >> s1 >> s2;
for (i = 0; i < n-1;i++)
{
if(s1[i]!=s2[i])
{
if(s1[i+1]!=s1[i]&&s1[i+1]!=s2[i+1])
{
    sum++;
    s1[i] = s2[i];
    s1[i + 1] = s2[i + 1];
    i++;
}
else
{
    sum++;
    s1[i] = s2[i];
}


}
}
if(s1[n-1]!=s2[n-1])
{
    sum++;
}
cout << sum << "\n";
return 0;
}