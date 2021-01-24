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
 ll t,m,n,i,j,flag=0;
 cin >> m>>n;
 char arr[m][n];
 int dup[m][n];
 for (i = 0; i < m;i++)
{
    for (j = 0; j < n;j++)
        cin >> arr[i][j];
}
for (i = 0; i < m;i++)
{
    flag = i % 2;
    for (j = 0; j < n;j++)
{
    dup[i][j] = flag;
    flag = !flag;

}
}
for (i = 0; i < m;i++)
{
    for (j = 0; j < n;j++)
{
if(dup[i][j]==0&&arr[i][j]=='.')
    cout << 'B';
else if (dup[i][j] == 1 && arr[i][j] == '.')
    cout << 'W' ;
else
{
    cout << '-' ;
}

}
cout << endl;
}
    return 0;
}