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
 ll t;
 ll f = 0;
 ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
 ll m;
 cin >> n >> m;
 ll arr[n];
 ll sum1 = 0;
 ll sum = 0;
 for (i = 0; i < n; i++)
 {
     cin >> arr[i];
     sum1 += arr[i];
}
     sort(arr, arr + n);
     for (i = n - 1; i > 0;i--)
{
if(arr[i]==0)
{
    f = 1;
    break;
}
   if(arr[i]<arr[i-1])
{
    sum++;
    arr[i - 1] = arr[i] - 1;

}
else if(arr[i]==arr[i-1])
    {
sum++;
        arr[i - 1]--;
    }
else
{
    sum += (arr[i] - arr[i - 1]);
}


}
ll z = 1;
if(f==1)
    sum += (i + 1);
else
sum += (max(arr[0],z));
cout << sum1 - sum << endl;


 return 0;
}