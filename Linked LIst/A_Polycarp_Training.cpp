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
ll n,i;
cin>>n;
ll arr[n];
for (i = 0; i < n;i++)
    cin >> arr[i];
ll c = 0;
sort(arr, arr + n);
i = 0;
for (i = 0; i < n;i++)
{
if(arr[i]>=c+1)
    c++;

}

    cout << c << endl;
return 0;
}