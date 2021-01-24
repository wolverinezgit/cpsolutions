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
 ll t;

 cin >> t;
while(t--){
   ll i, n, j, flag = 0, mx = 0, mn = 1e9 + 7, io = 0, ie = 0, flag1 = 0, p;
   double p1;
   cin >> n;
   
   if (n % 2)
   {
       for (i = 2; i * i <= n; i++)
       {
           p = log(n) / log(i);
           p1 = log(n) / log(i);

           if (p == p1)
           {
           
               flag1 = 1;
               io = i;
               break;
           }
           if (flag1 == 1)
               break;
       }
}
    for (i = 2; i * i <= n;i++)
{
if(__gcd(n,i)==i)
{
    ie = i;
    flag = 1;
    break; 
}
}
if(flag1==0&&n%2)
{
    cout << 1 << endl;
    cout << n << endl;

}
else
{
if(n%2)
{
    for (j =1; j <= p;j++)
{
    cout << io << " ";

}
cout << endl;

}
else
{
    vector<ll> v;
    while(n%2==0)
{
    if ((n / 2) % 2)
        {

            v.pb(2);
            v.pb(n / 2);
            break;
            
}
v.pb(2);
n = n / 2;

}

cout << v.size() << endl;
for (i = 0; i < v.size();i++)
    cout << v[i] << " ";
cout<<endl;
}

}
}
 return 0;
}