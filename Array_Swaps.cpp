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

    ll n1, n2;
    cin >> n1 >> n2;
ll arr1[n1];
ll arr2[n2];
flag = 0;
ll sum = 0;
for (i = 0; i < n1;i++)
    cin >> arr1[i];
for (i = 0; i < n2;i++)
    cin >> arr2[i];
sort(arr1,arr1+n1);
sort(arr2, arr2 + n2);
ll last = n1;
for (i = 0; i < n2;i++)
{
    for (j = 0; j < last;j++)
{
if(arr2[i]>=arr1[j])
{
    sum += (j);
    flag = 1;
    last = j;
  
    break;
  

}


}

if (flag == 0&&last!=0)

    sum += (n1);
flag = 0;
}
cout << sum << "\n";

 return 0;
}