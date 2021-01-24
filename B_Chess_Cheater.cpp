#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
#define S second
#define f first
#define s second
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
while(t--){
    cin >> n;
    ll k;
    cin >> k;
    string s;
    cin >> s;
    for (i = 1; i < s.length(); i++)
    {

if(i+1<n&&i-1>=0)
       {
         if (s[i] == 'L' && s[i-1] == 'W' &&s[i+1]=='W' && k > 0)
        {
            s[i] = 'W';
            k--;
        }
        else if (s[i] == 'W' && s[i - 1] == 'L' && s[i + 1] == 'W' && k > 0)
        {
            s[i-1] = 'W';
            k--;
        }
        else if (s[i] == 'W' && s[i - 1] == 'W' && s[i + 1] == 'L' && k > 0)
        {
            s[i + 1] = 'W';
            k--;
        }
}
    }
   
    for (i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'L' && k > 0)
        {
            s[i + 1] = 'W';
            k--;
        }
        if (s[i] == 'L' && s[i + 1] == 'W' && k > 0)
        {
            s[i] = 'W';
            k--;
        }
        }
       

        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L' && k > 0)
            {
                s[i] = 'W';
                k--;
            }
        }
       
        ll sum = 0;
        if(s[0]=='W')
            sum += 1;

        for (i = 1; i < s.length();i++)
        {
        if(s[i]=='W')
        {
        if(s[i-1]=='W')
            sum += 2;
        else
        {
            sum++;
        }

        }

        }
        cout << sum << endl;
   
    }
 return 0;
}