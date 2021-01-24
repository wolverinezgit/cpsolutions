#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
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
 cin >> n;
ll arr[n];
for (i = 0; i < n;i++)
{
    cin >> arr[i];
    mx = max(mx, arr[i]);

}

    
    ll sieve[(ll)sqrt(mx) + 1] = {0};
sieve[1] = 1;
sieve[0] = 1;
for (i = 2; i*i<= (ll)sqrt(mx);i++)
{
    if (sieve[i]==0)
    {
        for (j = i * i; j <= (ll)sqrt(mx); j += i)
        {
            sieve[j] = 1;
        }
}


}

    for (i = 0; i < n; i++)
    {

        if ( sieve[(ll)sqrt(arr[i])] == 0&&(floor(sqrt(arr[i]))==ceil(sqrt(arr[i]))))
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}