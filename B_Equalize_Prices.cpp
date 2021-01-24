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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll k;

    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    

    if (arr[0]+k>=arr[n-1]||arr[0]+k>=arr[n-1]-k)
        cout <<arr[0]+k<< endl;

else
{
    cout << -1 << endl;
}

}
 return 0;
}