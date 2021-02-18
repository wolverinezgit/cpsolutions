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
 cin >> n;
 ll i;
 ll a1[n];
ll a2[n];

for (i = 0; i < n;i++)
{
    cin >> a1[i];
}
for (i = 0; i < n;i++)
{
    cin >> a2[i];

}
vector<ll> neg;

vector<ll> v;
for (i = 0; i < n;i++)
{
    
if((a1[i]-a2[i])>0)
    v.pb(a1[i] - a2[i]);
else
{
    neg.pb(abs(a1[i] - a2[i]));
}

}
ll sum = 0;
i = 1;
sort(neg.begin(), neg.end());
sort(v.begin(), v.end());
for (i=0;i<v.size();i++)
{

    ll c = v.size()-i-1;
if(c<0)
    c = 0;
ll no = 0;


    no = (lower_bound(neg.begin(), neg.end(), v[i])) - neg.begin();


    c += no;
    sum += (c);
}
cout << sum  << endl;
return 0;
}