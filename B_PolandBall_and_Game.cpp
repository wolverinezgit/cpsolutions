#include <bits/stdc++.h>
using namespace std;
int main()
{

long long n,m;
cin>>n>>m;
map<string, int> m1;
long long c1 = 0, c2 = 0;
long long i = n, j = m;
while(n--)
{
  
    string str;
cin>>str;
    m1[str]=1;
}
while(m--)
{
    string s;
    cin>>s;
    if (m1.find(s) != m1.end())
        c2++;

}

if(i>j)
    cout << "YES";
else if(j>i)
    cout << "NO";
else
{
    if(c2%2)
        cout << "YES";
else
{
    cout << "NO";
}

}


return 0;
}
