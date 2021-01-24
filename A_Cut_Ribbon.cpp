#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back

 



int main()
{
 
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,k;

ll a,b,c;
cin >> n;

cin >> a >> b >> c;
for (i = 0; i*a <= n;i++)
{
    for (j = 0; (i*a+j*b)<= n;j++)
{
    
    if ((n - (i * a) - (j * b)) % c == 0)
    {
       
            k = (n - (i * a) - (j * b)) / c;
        mx = max(mx, i + j + k);
}

}
}
cout << mx << endl;
return 0;
}