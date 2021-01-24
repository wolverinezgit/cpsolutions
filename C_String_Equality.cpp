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
 cin >> t;
while(t--){
    ll n1, k;
    cin >> n1 >> k;
    string s1;
    string s2;
    cin >> s1 >> s2;
ll a1[26]={0};
ll a2[26] = {0};
ll diff = 0;
ll f = 0;
for (i = 0; i < s1.length(); i++)
{
    a1[s1[i] - 'a']++;
}
for (i = 0; i < s2.length(); i++)
{
    a2[s2[i] - 'a']++;
}

for (i = 0; i < 26;i++)
{
if(a1[i]<a2[i])
    f = 1;
else
{
    diff = a1[i] - a2[i];
if(diff%k)
    f = 1;
a1[i + 1] += diff;
diff = 0;
}

}

if(f==1)
    cout << "NO"
         << "\n";
else
{
    cout << "YES"
         << "\n";
}

}
 return 0;
}