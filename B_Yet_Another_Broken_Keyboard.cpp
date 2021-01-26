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
        cin >> n;
        string s;
        ll k;
        cin >> k;
        cin >> s;
        map<char, ll> m1;
        for (i = 1; i <= k;i++)
        {
            char ch;
            cin >> ch;
            m1[ch]++;
        }
        ll dp[n] = {0};
        ll c = 0;
        ll sum = 0;
        for (i = 0; i < n;i++)
        {
        if(m1.find(s[i])==m1.end())
            {
                sum += ((c * (c + 1)) / 2);
                c = 0;
        }
        else
        {
            c++;
        }

        }
        if(c!=0)
            sum += (c * (c + 1)) / 2;
        cout<<sum<< endl;
            return 0;
        }