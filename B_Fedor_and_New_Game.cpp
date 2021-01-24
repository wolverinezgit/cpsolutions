#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void solve(){
}
int main()
{
 fast_cin();
 ll m,n,k;
 cin >> n>> m >> k;
 ll arr[m + 1];
ll i,count=0;
for (i = 0; i <= m;i++)
    cin >> arr[i];
for (i = 0; i < m;i++)
{
    ll cmp = arr[m];
    ll c = 0;
while(cmp||arr[i])
{
if((cmp&1)!=(arr[i]&1))
    c++;
cmp =cmp>> 1;
arr[i]= arr[i]>> 1;
}

if(c<=k)
    count++;
}
cout << count;
return 0;
}