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
     ll t,i,n,flag=0,mx=0,mn=1e9+7;
     cin >> t;
    while(t--){
        int j = 9;
        cin >> n;
        vector<ll> v;
if(n>45)
    cout << -1 << endl;
else
{
    while(n>0)
{
if(n<=j)
{
    v.pb(n);
n = 0;
}
else
{
    v.pb(j);
    j--;
    n = n - j-1;
}


}
sort(v.begin(), v.end());
for (i = 0; i < v.size();i++)
cout<<v[i];
cout << endl;
}

    }
     return 0;
    }