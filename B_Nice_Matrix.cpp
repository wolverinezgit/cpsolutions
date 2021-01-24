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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--)
{
ll n,m;
cin >> m >> n;
ll sum = 0,avg=0;
ll arr[m][n];
for (i = 0; i < m;i++)
{
    for (j = 0; j < n;j++)
        cin >> arr[i][j];
}
ll h = m - 1, w = n - 1;
for (i = 0; i < m/2;i++)
{
    for (j = 0; j < n/2;j++)
{
     avg = (arr[i][j] + arr[i][j + w] + arr[i + h][j] + arr[i + h][j + w]) / 4;
    sum += (abs(arr[i][j] - avg));
    cout << sum << endl;
    sum += (abs(arr[i][j+w] - avg));
    cout << sum << endl;
    sum += (abs(arr[i+h][j] - avg));
    cout << sum << endl;
    sum += (abs(arr[i+h][j+w] - avg));
    cout << sum << endl;
    
    w--;
}
}
avg = 0;
if(m%2)
{
    for (j = 0; j < n;j++)
{
    avg += arr[m / 2][j];
}
avg = avg / (n);
for (j = 0; j < n;j++)
{
    sum += (abs(arr[m / 2][j] - avg));
    cout << sum << endl;

}
}
avg = 0;
if (n % 2)
{
    for (j = 0; j < m; j++)
    {
        avg += arr[j][n/2];
    }
    avg = avg / (m);
    for (j = 0; j < n; j++)
    {
        sum += (abs(arr[j][n/2] - avg));
        cout << sum << endl;
    }
}
// cout << sum << endl;

}

 return 0;
}       