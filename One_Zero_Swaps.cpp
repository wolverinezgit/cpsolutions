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
while(t--){
cin>>n;
string s1, s2;
cin >> s1 >> s2;
ll z1 = 0, z2 = 0, o1 = 0, o2 = 0;
ll flag = 0;
for (i = 0; i < s1.length(); i++)
{
if(s1[i]!=s2[i])
{
if(s1[i]=='1')
    o1++;
else
{
    if(o1>=1)
o1--;
else
{
    flag = 1;
}

}


}
}
            if (flag==0&&o1==0)
                cout << "Yes"
                     << "\n";
            else
            {
                cout << "No"
                     << "\n";
            }

}
 return 0;
}