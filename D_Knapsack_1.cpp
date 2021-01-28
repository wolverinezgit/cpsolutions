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
ll n;
int knapsack(ll idx, ll weight, ll w[], ll val[],vector<vector<ll>>&dp)
{

if(weight==0)
    return 0;
if(idx>=n)
    return 0;
if(dp[idx][weight]!=-1)
    return dp[idx][weight];
if(w[idx]>weight)
{
    return dp[idx][weight]=knapsack(idx + 1, weight, w, val,dp);


}
else
{
    ll left = val[idx]+knapsack(idx + 1, weight - w[idx], w, val,dp);
    ll right = knapsack(idx + 1, weight, w, val,dp);
    dp[idx][weight]=max(left, right);
    return dp[idx][weight];
}



}

int main()
{
 fast_cin();
 ll t,i,j,flag=0,mx=0,mn=1e9+7;
 ll weight;
 cin >>n>> weight;
 ll w[n], val[n];
 vector<vector<ll>> dp(vector<ll>(n+1,-1));
 for (i = 0; i < n;i++)
{
    cin >> w[i];
    cin >> val[i];
}
cout << knapsack(0, weight, w, val,dp);
return 0;
}