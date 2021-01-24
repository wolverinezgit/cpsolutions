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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,c=0;
 
 cin >> n;
 ll arr[n];

 for (i = 0; i < n;i++)
{
    cin >> arr[i];

}
ll os = 0, es = 0;
for (i = 0; i < n;i++)
{
if((i+1)%2)
{
    os += arr[i];

}
else
{
    es += arr[i];
}

}
ll o = 0, e = 0;
for (i = 0; i < n;i++)
{
if((i+1)%2)
{
    ll lsum = os - arr[i] - o;
    ll rsum = es - e;
    if ((lsum+e) == (o+rsum))
        c++;

}
else
{
    ll rsum = es - arr[i] - e;
    ll lsum = os - o;
    if ((lsum + e) == (o + rsum))
        c++;
}
if((i+1)%2)
    o += arr[i];
else
{
    e += arr[i];
}

}
cout << c << endl;

    return 0;
}