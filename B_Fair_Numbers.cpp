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
 ll t,i,j,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    long long int n;

    cin >> n;
    for (i = n; i <=n+3000;i++)
{

    long long int n1 = i;
    vector<ll> v;
    while (n1)
    {
        v.pb(n1 % 10);
        n1 /= 10;
}
int flag = 0;
for(int x:v)
{
if(x!=0&&i%x!=0)
{
    flag = 1;
}

}
if(flag==0)
{
    cout << i << endl;
    break;
}

}
}
 return 0;
}