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
ll n;
cin >> n;

ll arr[n];
ll i;
for (i = 0; i < n;i++)
{
    cin >> arr[i];
}
ll l = 0, r = 0;
while(r<n)
{
if(arr[l]>0&&arr[r]<0)
    swap(arr[l++], arr[r++]);
else if(arr[l]>0&&arr[r]>0)
{
    l++;
    r++;
}
else
{
    l++;
    r++;

}

}
for (i = 0; i < n;i++)
    cout << arr[i] << " ";


 return 0;
}