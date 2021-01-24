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
while(t--){
    cin >> n;
    ll c = 0;
    while (n !=2&&n>2)
    {
        if (n % 2 == 0)
        {
            c++;
            n = 2;
        }
        else
        {
            c++;
            n--;
           
        }



}
if(n==2)
cout << c+1 << endl;
else
{
    cout << c << endl;
}


}
 return 0;
}