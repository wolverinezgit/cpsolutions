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
 ll t,i,j,flag=0;
 string s;
 cin >> s;
 cin >> t;

 int arr[26];
 for (i = 0; i < 26;i++)
     cin >> arr[i];

     for (i = 0; i < s.length(); i++)
     {
         flag += (i + 1) * arr[s[i] - 'a'];
     }
     sort(arr, arr + 26);
     for (i = s.length()+1; i <= t+s.length();i++)
         flag += (i * arr[25]);
     cout << flag;
      return 0;
}