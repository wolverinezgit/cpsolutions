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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--)
{
    ll x, y, z;
    ll f = 0;
    ll k;
    ll arr[3];
    ll a1, a2, a3;
    cin >> arr[0] >> arr[1] >> arr[2];
    for (i = 0; i <= 1;i++)
{
    for (j = 0; j <= 2;j=j+2)
{
        for ( k = 1; k <= 2; k++)
        {
            if (arr[0] == max(arr[i], arr[j]) && arr[1] == max(arr[i], arr[k]) && arr[2] == max(arr[j], arr[k]))
            {
                f = 1;
                
                    a1 = arr[i], a2 = arr[j], a3 = arr[k];
                
            
        }
}
}
}
if(f==1)
{
    cout << "YES" << endl;
    cout << a1 << " " << a2 << " " << a3 << endl;
}    
else
{
    cout << "NO" << endl;
}


}

 return 0;
}