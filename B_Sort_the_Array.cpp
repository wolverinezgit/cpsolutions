#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void solve(){
}
int main()
{
 fast_cin();
 ll n;
 cin >> n;
 ll arr[n];
 ll dup[n];
 ll i;
 ll mn = INT_MAX,mx=0,z=0,ne=0;
 int flag = 0;
 for (i = 0; i < n;i++)
{
    cin >> arr[i];
    dup[i] = arr[i];
}
sort(dup, dup + n);
for (i = 0; i < n;i++)
{
 
if(arr[i]!=dup[i])
{

    mn = min(mn, i);
    mx = max(mx, i);

}
}
for (i = mn; i < mx;i++)
{
if(arr[i]<arr[i+1])
{
    flag = 1;
  
  break;
}
}

    if (flag==0)
    {
if(mx==0)
{

    cout << "yes" << endl;
    cout <<  1 << " " << 1 << endl;
}
else
{
    cout << "yes" << endl;
    cout << mn + 1 << " " << mx + 1 << endl;
}

      
    }
    else
    {
        cout << "no";
    }


return 0;
}