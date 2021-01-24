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
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7,c=0;
 cin >> n;
 vector<pair<ll, ll>> score;
 score.pb(mp(0, 0));

 for (i = 0; i < n;i++)
{
    ll x, y;
    cin >> x >> y;
    score.pb(mp(x, y));


}

ll prev = -1;
sum += (min(score[0].first, score[0].second));
for (i = 1; i < n-1;i++)
{
    mn = min(score[i+1].first, score[i+1].second);
    mx = max(score[i].first, score[i].second);
    

            if((mn-mx)>=0 &&mx!=prev)
{
                c += ((mn - mx));
        prev = mx;
}
    
}

cout << c<< endl;
return 0;
}