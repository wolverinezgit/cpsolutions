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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;

 string s;
 vector<pair<int, char>> arr;
 for (i = 0; i < 4;i++)
{
  
    getline(cin,s);
 
    arr.pb(mp(s.length()-2, (char)(i + 'A')));
}
     
 sort(arr.begin(), arr.end() );
 
    
     int small = arr[0].first;
 int large = arr[3].first;
 for (i = 1; i < 4;i++)
{
if(arr[i].first>=(2*small))
    flag++;

}
ll flag1 = 0;
for (i = 0; i < 3; i++)
{
    if (2*arr[i].first<= large)
        flag1++;
}
if(flag==3&&flag1==3)
    cout << 'C';
else if(flag==3)
cout<<arr[0].second;
else if(flag1 == 3)
   cout << arr[3].second;
else
{
    cout <<'C';
}



return 0;
}