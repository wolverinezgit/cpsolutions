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
 ll t,i,N,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){

    cin >> N;
    ll c = 0;
    const long long MAX_SIZE = 1000001;
    vector<long long> isprime(MAX_SIZE, true);
    vector<long long> prime;
    vector<long long> SPF(MAX_SIZE);
    isprime[0] = isprime[1] = false;

    for (long long int i = 2; i < N; i++)
    {
      
        if (isprime[i])
        {
           
            prime.push_back(i);

           
            SPF[i] = i;
        }

       
        for (long long int j = 0;
             j < (int)prime.size() &&
             i * prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i * prime[j]] = false;

            
            SPF[i * prime[j]] = prime[j];
        }
    }
    map<ll, ll> m;
    for (i = 0; i < prime.size()&&prime[i]<=N;i++)
{
    m[prime[i]]++;
}
for(auto x:m)
{
if(x.first>=1&&x.first<=N&&(x.first-2<=N&&x.first-2>=1)&&(m.find(x.first-2)!=m.end()))
    c++;
}
    
  
cout << c << "\n";
}
 return 0;
}