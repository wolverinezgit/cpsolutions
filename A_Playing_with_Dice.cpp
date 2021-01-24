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
 ll a,b,a1=0,a2=0,a3=0,i;
 cin >>a>>b;
 for (i = 1; i <= 6;i++)
{
if(abs(i-a)<abs(i-b))
    a1++;
else if(abs(i-a)==abs(i-b))
    a2++;
else
{
    a3++;

}



}
cout << a1 << " "<<a2<<" "<<a3;
    return 0;
}