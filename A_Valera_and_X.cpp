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
 ll t,i,j,flag=0,n;
 cin >> n;
 char arr[n][n];
 for (i = 0; i < n;i++)

 {
     for (j = 0; j < n; j++)
         cin >> arr[i][j];

}
for (i = 0; i < n;i++)
{
    for (j = 0; j < n;j++)
{
if((i==j)||((i+j)==n-1))
{
if(arr[i][j]!=arr[0][0])
    flag = 1;


}
else 
{

if(arr[i][j]!=arr[0][1])
    flag = 1;
}

}


}
if(arr[0][0]==arr[0][1])
    flag = 1;
if (flag == 0)
    cout << "YES";
else
{
    cout << "NO";
}
    return 0;
}
