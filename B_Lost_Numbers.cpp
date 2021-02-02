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
 ll arr[]={4,8,15,16,23,42};
 ll n = 6;
 ll i, j;

 set<ll> s;
 vector<ll> v1;
 vector<pair<ll, ll>> v((23 * 24) + 1,{0,0});


 
 for (i = 0; i < 6;i++)
{
    s.insert(arr[i]);
}
     for (i = 0; i < 6; i++)
     {
         for (j = 0; j < 6; j++)
         {
             if (i != j)
             {
                v[arr[i]*arr[j]]=mp(i, j);
             }
         }
     }

ll q1, q2;
for (i = 1; i <= 4;i++)
{
    ll q;
    cout << '?' << " " << 1 << " " << 1 << endl;
    cin >> q;
    v1.pb(q);
    s.erase(sqrt(q));
    cout << '?' << " " << 2 << " " << 2<< endl;
    cin >> q;
    v1.pb(q);
    s.erase(q);
    cout << '?' << " " << 3 << " " << 4 << endl;
    cin >> q1;

    cout << '?' << " " << 4 << " " << 5<< endl;
    cin >> q2;
}
eturn 0;
}