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
int convert(string s,string str)
{
    string str1 = (s.substr(0, 2));
    int l1 = stoi(str1);
    l1 = l1 * 60;
    string str2 = s.substr(3, 2);
    int l2 = stoi(str2);
    l1 += l2;
    if (str.compare("AM")==0)
    {
        if (s.substr(0, 2) == "12")
        {
            l1 -= (12 * 60);
        }
    }
    if (str.compare("PM") == 0)
    {
        if (s.substr(0, 2) != "12")
        {
            l1 += (12 * 60);
        }
    }
    return l1;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;

 while (t--)
 {
     string a1,a2;
     cin >> a1 >> a2;
   
     int limit = convert(a1,a2);
     ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
     cin >> n;
     vector<int> v;

     for (i = 0; i < n;i++)
{
    string z1, z2, z3, z4;

    cin >> z1>>z2>>z3>>z4;
    
    
    int l1 = convert(z1,z2);

    int l2 = convert(z3, z4);
    if (limit >= l1 && l2 >= limit)
    {
        v.pb(1);

}
else
{
    v.pb(0);
}

}
for(int x:v)
{
    cout << x;

}
cout << "\n";
}


 return 0;
}