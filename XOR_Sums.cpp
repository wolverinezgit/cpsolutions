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
 int n;
 cin >> n;

 unsigned short *a = new unsigned short[n];
 for (int i = 0; i < n; i++)
     cin >> a[i];

 int partial[65536];
 fill(partial, partial + 65536, 0);

 int xsum = 0;
 partial[xsum]++;
 for (int i = 0; i < n; i++)
 {
     xsum ^= a[i];
     partial[xsum]++;
 }

 int count[65536];
 fill(count, count + 65536, 0);

 for (int i = 0; i < 65536; i++)
     for (int j = 0; j < i; j++)
         count[i ^ j] += partial[i] * partial[j];

 int max = 0;
 for (int i = 0; i < 65536; i++)
     if (count[i] > count[max])
         max = i;

 cout << max << ' ' << count[max] << endl;

 return 0;
}