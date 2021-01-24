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
 ll t,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll x,k;
    ll n, i, j;
    ll flag = 0;
    cin >>k>> n;
     x = __builtin_popcount(n);

    if (k < x || k > n)
    {
        cout << "-1"<<endl;
        continue;
    }

   
    priority_queue<int> pq;

    
    int two = 1;
    while (n)
    {
        if (n & 1)
        {
            pq.push(two);
        }

        two = two * 2;
        n = n >> 1;
    }

 
    while (pq.size() < k)
    {

        
        int el = pq.top();
        pq.pop();

       
        pq.push(el / 2);
        pq.push(el / 2);
    }

  
    int ind = 0;
    while (ind < k)
    {
        cout << (char)(log2(pq.top())+'a');
        pq.pop();
        ind++;
    }

    cout << endl;
}
 return 0;
}