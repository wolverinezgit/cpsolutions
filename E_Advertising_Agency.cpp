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

const int mod = 1e9 + 7;

int ncr[1001][1001];
void ncr()
{
    ncr[1][0] = 1;
    ncr[1][1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        ncr[i][0] = 1;
        for (int j = 1; j <= i; j++)
            ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % mod;
    }
}

int main()
{
 fast_cin();
 ncr();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
ll k;
cin >> n >> k;
ll arr[n];
for (i = 0; i < n;i++)
    cin >> arr[i];
sort(arr, arr + n,greater<ll>());
ll c = 0;
for (i = 0; i < n;i++)
{
if(arr[i]==arr[k-1])
    c++;
}
ll idx = 0;
for (i = 0; i < n; i++)
{
    if (arr[i] == arr[k - 1])
        {
            idx = i;
            break;
}
}
ll r = k - idx;
n = c;


   

    cout << ncr[c][r] << endl;

}
 return 0;
}
