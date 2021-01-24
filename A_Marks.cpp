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
 ll t,i,n,m,j,flag=0,mx=0,mn=1e9+7;
 cin >> n >> m;
 set <ll> s1;
 long long int arr[n][m];
 for (i = 0; i < n;i++)
{
    string p;
    cin >> p;
    ll z = 0;
    for (j = 0; j < m;j++)
    {
        arr[i][j] = (p[z++] - '0');
       
}
}
for (j = 0; j < m;j++)
{
   
    for (i = 0; i < n;i++)
{
if(mx<arr[i][j])
{
    mx = arr[i][j];
   
}

}

    for (i = 0; i < n; i++)
{
if(arr[i][j]==mx)
{
  
    s1.insert(i);
}
}


mx = 0;
}
cout << s1. size() << endl;
return 0;
}