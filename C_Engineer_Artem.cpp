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
 ll t, i, j, flag = 0;
 ll check = 0, prev = 0;

 cin >> t;
while(t--){
    ll m,n;
    cin >> m >> n;
    ll arr[m][n];
    ll prev = 0;
    ll dup[m][n];
    for (i = 0; i < m;i++)
{
    for (j = 0; j < n;j++)
{
        cin >> arr[i][j];
       
}

}
for (i = 0; i < m;i++)
{

        

        prev = i%2;

    for (j = 0; j < n;j++)
{


if (arr[i][j] % 2 ==prev)
    prev = !prev;
else
{
    arr[i][j] += 1;
    prev=!prev;

}

}

}

for (i = 0; i < m;i++)
{
    for (j = 0; j < n;j++)
        cout << arr[i][j] << " ";
    cout << endl;

}
}
 return 0;
}