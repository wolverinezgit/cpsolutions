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
 cin >> t;
string s;
cin >> s;
ll arr[10] = {0};
for (i = 1; i <= 9;i++)
{
    ll p;
    cin >> p;
    arr[i] = p;
}
for (i = 0;i<s.length();i++)
{
    if (arr[s[i] - '0'] > (s[i] - '0'))
{
    flag = 1;

}
        if (arr[s[i] - '0'] >= (s[i] - '0'))
        {
            s[i] = arr[s[i] - '0'] + '0';
            
        }
        else
        {
            if (flag == 1)
                break;
        }


}
cout << s;
return 0;
}