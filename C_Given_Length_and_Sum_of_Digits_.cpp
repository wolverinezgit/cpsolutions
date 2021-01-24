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
 ll t,i,n1,n,n2,j,flag=0,mx=0,mn=1e9+7;
ll sum=0,a;
cin >> n >> sum;
n1 = n;
n2 = n;
ll sum2 = sum;
ll z = 0;


ll z1 = 0;
while(n2--)
{

    mx = 0;
    for (i = 1; i <= 9; i++)
    {
        if ((sum2 - i) >= 0&&(sum2-i)>=n2)
        {
            mx = max(mx, i);
        }
    }
    sum = sum - mx;
    z1 = (z1 * 10)+mx;
}
cout << z1 << endl;

while(n--)
{

    mx = 0;
    for (i = 0; i <= 9; i++)
    {
        if ((sum - i) >=0)
        {
            mx = max(mx, i);
        }
}
sum = sum - mx;
z = (z * 10) + mx;

}
if(z==0)
    cout << -1 << " " << -1;
else
{
    string s = (to_string)(z);

    reverse(s.begin(), s.end());
if(s[0]=='0'&&s.length()>1)
    cout << z << " " << z << endl;
else
{
    cout << s << " ";
    cout << z << endl;
}


   

}


return 0;
}