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
 ll t,i,j,n,flag=0,mx=0;
 cin >> n;
 ll a1 = 0, a2 = 0, a3 = 0;
 bool occ = false;
 ll arr[n];
 for (i = 0; i < n;i++)
     cin >> arr [i];
 for (i = 0; i < n;i++)
{
if(i%3==0)
    a1 += arr[i];
else if(!occ)
{
    a2 += arr[i];
    occ = !occ;
}
    else
    {
        a3 += arr[i];
        occ = !occ;
}

   

}

mx = max(max(a1, a2), a3);
if(mx==a1)
    cout << "chest";
else if(mx==a2)
    cout << "biceps";
else
{
    cout << "back";
}

return 0;
}