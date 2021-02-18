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

 ll n, k, j;
 double mx = 0;
 cin >> n >> k;
 ll arr[n];
 ll i;
 for (i = 0; i < n;i++)
     cin >> arr[i];
ll p[n]={0};
p[0] = arr[0];
for (i = 1; i < n;i++)
{
    p[i] = p[i - 1] + arr[i];
}
    for (i = k; i <= n; i++)
    {
        for (j = 0; j < n; j++)
{
if(j+i-1<n)
{
if(j>=1)
    mx = max(mx, (double)(p[j + i - 1] - p[j - 1]) / (double)(i));
else
{
    mx = max(mx, (double)(p[j + i - 1]) / (double)(i));
}

}
    
else
{
    break;
}


}
    }
    cout << fixed<<setprecision(12)<<mx << endl;
    return 0;
}