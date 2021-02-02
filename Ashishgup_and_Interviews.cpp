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
 cin >> t;
 while (t--)
 {
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     ll k;
     cin >> n >> k;
     ll arr[n];
     ll ne = 0;
     ll r = 0;
     ll sum = 0;
     for (i = 0; i < n;i++)
{
    cin >> arr[i];
if(arr[i]==-1)
    ne++;
if(arr[i]>k)
    r = 1;
if(arr[i]==0||arr[i]==1)
    sum++;
}
ll n2 = n;
if(n2%2)
{
    n2 = n2 / 2;
    n2++;
}
else
{
    n2 /= 2;
}

if((n-ne)<n2)
{
    cout << "Rejected" << endl;
}
else if(r==1)
{
    cout << "Too Slow" << endl;
}
else if(sum==n)
{
    cout << "Bot" << endl;
}
else
{
    cout << "Accepted" << endl;
}

}


 return 0;
}