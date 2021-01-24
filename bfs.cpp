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
int n,e,i,j;
cin >> n >> e;
int vis[n]={0};
int edge[n][n];

for (i = 0; i < n;i++)
{
    for (j = 0; j < n;j++)
        edge[i][j] = 0;
}
for (i = 1; i <= e;i++)
{
    int x, y;
    cin >> x >> y;
    edge[x][y] = 1;
    edge[y][x] = 1;


}
int sv;
cout << "Starting vertex";
cin >> sv;
queue<int> q;
vis[sv] = 1;
q.push(sv);
while (q.size())
{
    sv = q.front();
    for (i = 0; i < n; i++)
    {
        if (edge[sv][i] == 1 && vis[i] == 0)
        {
            q.push(i);
            vis[i] = 1;
        }
    }
    cout << q.front() << " ";
    
    q.pop();
}

return 0;
}