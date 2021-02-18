#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
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
 ll t;
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     cin >> n;
     ll arr[n];
     map<ll, ll> m;
     for (i = 0; i < n;i++)
{
    cin >> arr[i];
    m[arr[i]]++;
}
ll c = 0;
ll sum = 0;
vector<ll> f;
for (auto x : m)
{
    f.pb(x.second);
}
sort(f.begin(),f.end());
ll ssum[f.size()]={0};
ll psum[f.size()]={0};

for (i = f.size()-1;i>=0;i--)
{
    sum += (f[i]);
    ssum[i] = sum;

}
sum = 0;
for (i = 0; i < f.size();i++)
{
    sum += f[i];
    psum[i] = sum;

}

set<ll> st;
for (i =0;i<f.size()-1;i++)
{
    ll q = f[i] * (f.size() - (i + 1));
    // cout << "q" << q << endl;
    ll q2 = abs(q-ssum[i+1]);
if(i>0)
    q2 += psum[i - 1];
// cout << q2 << " ";
st.insert((q2));

}
if(f.size()>=2)
st.insert(psum[f.size() - 2]);
if(f.size()==1)
    cout << 0 << endl;
else
cout << *st.begin() << "\n";
}


 return 0;
}