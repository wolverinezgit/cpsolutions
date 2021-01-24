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
 ll t,i,j,flag=0,p=0;
 cin >> t;
while(t--){
ll m,n;
cin >> m >> n;
ll a[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin >> a[i][j];
    }
}
ll sum = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        sum += (a[i][j]);
    }
}


    cout << abs(sum) << endl;

}
 return 0;
}