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
 ll t,i,n,m,j,flag=0,mx=0,mn=1e9+7;

cin>>n>>m;
ll arr[n][m];
for(i=0;i<n;i++)
{
    for (j = 0; j < m;j++)
        cin >> arr[i][j];
}
for (i = 1; i < n;i++)
{
    arr[i][0] = arr[i][0] + arr[i - 1][0];
}
for (j = 1; j < m;j++)
{

    arr[0][j] += arr[0][j - 1];
}


    for (j = 1; j < m; j++)
    {
        for (i = 1; i < n; i++)
        {
            if (arr[i][j - 1] > arr[i - 1][j])
            {
        
                arr[i][j] = arr[i][j] + arr[i][j-1];
           
            }
            else
            {
                arr[i][j] += arr[i - 1][j];
            }
        }
    }
for (i = 0; i < n;i++)
{
    cout << arr[i][m - 1] << " ";

}
    return 0;
}