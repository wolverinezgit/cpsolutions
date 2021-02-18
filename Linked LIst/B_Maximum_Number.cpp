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
 ll n;
 cin >> n;
 ll c = 0;
 ll i;
 if (n == 1)
     cout << 0 << endl;
 else
 {
     if (n % 2)
     {
         c =c*10+7;
         cout << '7';
         n -= 3;
     }
     for (i = 1; i <= n / 2;i++)
{

    cout << '1';
}

cout <<  endl;
}


 return 0;
}