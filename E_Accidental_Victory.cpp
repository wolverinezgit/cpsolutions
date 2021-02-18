#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second

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
     vector<pair<ll, ll>> v;
     ll arr[n];
     for (i = 0; i < n;i++)
         {
             ll p;
             cin >> p;
             arr[i] = p;
             v.pb(mp(p, i));

}
sort(v.begin(), v.end());
ll sum = 0;
vector <ll> prefix;
for (i = 0; i < n;i++)
{
    sum += v[i].first;
    prefix.pb(sum);

}
vector<ll> win;
win.pb(v.back().second);
int ok = 0;
for (i = n - 2; i >= 0;i--)
{
if(prefix[i]>=v[i+1].first)
{

    win.pb(v[i].second);



}
else
{
  
    break;
}


}
sort(win.begin(), win.end());
cout << win.size() << "\n";
for(auto x:win)
{
    cout << (x + 1) << " ";
}
cout << "\n";
}


 return 0;
}