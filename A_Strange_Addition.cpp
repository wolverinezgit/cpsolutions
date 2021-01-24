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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,target=-1;
 cin >> t;
 ll arr[t];
 vector<ll> v;
 for (i = 0; i < t;i++)
{
    cin >> arr[i];                          
if(arr[i]%10==0)
    v.pb(arr[i]);
else
{
    target = arr[i];
}


}
    if(target==-1&&v.size()>0)
{
cout<<v.size()<<endl;
for (i = 0; i < v.size();i++)
    cout << v[i] << " ";


}
else if(v.size()>0)
{
    cout << v.size()+1 << endl;
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << target << endl;
}
else
{
    cout << -1 << endl;
}


     return 0;
}