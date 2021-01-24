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
 ll n,m,flag=-1,c=0;
 cin >>n>>m;
 ll i, j;
 ll arr[n][m];
 ll a[n][m];
 ll a1, b, x, y,p=0;
 for (i = 0; i < n;i++)
{

    for (j = 0; j < m;j++)
{
        cin >> arr[i][j];
        a[i][j] = 1;
}

}

for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
{
if(arr[i][j]==0)
{
    
    for ( x = 0; x < n;x++)
{
    a[x][j] = 0;

}
for ( y = 0; y < m;y++)
{
    a[i][y] = 0;

}
}


}
}
for (i = 0; i < n;i++)
{
    for (j = 0; j < m;j++)
{
   
    for (x = 0; x < n; x++)
    {
        p|=a[x][j] ;    
    }
    for (y = 0; y < m; y++)
    {
        p|=(a[i][y]);
    }
if(p!=arr[i][j])
    flag = 1;
p = 0;
}
}
if(flag==1)
    cout << "NO";
else
{
    cout << "YES" << endl;
    for (i = 0; i < n;i++)
{

    for (j = 0; j < m;j++)
        cout << a[i][j] << " ";
    cout << endl;
}
}


    return 0;
}