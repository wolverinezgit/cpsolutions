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
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll n, k;
    ll sum = 0;
    cin >> n >> k;
    ll arr[n];
    for (i = 1; i <= n;i++)
{
    if (k >= n / 2)
        arr[i - 1] = i;
else
{
    arr[i - 1] = -i;
}


}
ll p;
if(k>=n/2)
    p = n - k;
else
{
    p = k;
}
if(n%2)
i = 0;
else
{
    i = 1;
}

while(p--)
{
    arr[i] = -arr[i];
    i = i + 2;

}
for (i = 0; i < n;i++)
    cout << arr[i] << " ";
cout << "\n";
}

    return 0;
}