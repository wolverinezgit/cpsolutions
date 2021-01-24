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
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll n1;
    cin >> n1;
    ll arr[n1];
    ll sum = 0;
    vector<ll> p;
    vector<ll> n;
    for (i = 0; i < n1;i++)
{
    cin >> arr[i];
if(arr[i]>=0)
    p.pb(arr[i]);
else
    n.pb(arr[i]);
    sum += arr[i];
}
sort(p.begin(), p.end());
if(sum==0)
    cout << "NO" << endl;
else
{
    cout << "YES" << endl;
    if (sum<0)
    {
        for (i=0;i<n.size();i++)
            cout << n[i] << " ";

        for (i =0; i<p.size();i++)
            cout << p[i] << " ";
        cout << endl;
    }
else
{
    for (i = p.size() - 1; i >= 0; i--)
        cout << p[i] << " ";
    for (i = 0; i < n.size(); i++)
        cout << n[i] << " ";
    cout << endl;
}


{


}
}

}
        



 return 0;
}