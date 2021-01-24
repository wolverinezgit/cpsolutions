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
 vector<pair<int, int>> v;
 int n1 = n, i = 0, j = 0;
 while (n1)
 {
     v.push_back(make_pair(i++, n1 % 10));

     n1 /= 10;
 }

 int flag = 0;
 int temp;
 for (i = 0; i < v.size(); i++)
     cout << v[i].first << " " << v[i].second << endl;
 for (j = 0; j < v.size(); j++)
 {
     for (i = j + 1; i < v.size(); i++)
     {

         if (v[i].second > v[j].second)
         {
            //  cout << v[i].second << " " << v[j].second << endl;
             swap(v[i].first, v[j].first);
            
          
            //  cout << v[i].second << " " << v[j].second << endl;
             flag = 1;
             break;
         }
     }
     if (flag == 1)
         break;
 }
 for (i = 0; i < v.size();i++)
     cout << v[i].first << " " << v[i].second << endl;
     sort(v.begin(), v.end());

 int sum = 0;
 for (i = 0; i < v.size(); i++)
 {
     sum = (sum * 10) + v[i].second;
 }
 cout << sum;
 return 0;

}