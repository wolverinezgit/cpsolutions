    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    #include <bits/stdc++.h> 
    using namespace std;
     
    typedef long long ll;
    #define S second
    #define f first
    #define s second
    #define v vector
    #define pob pop_back
    #define pf push_front
    #define mp make_pair
    #define pb push_back
    #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
     
    
    int main()
    {
     fast_cin();
     ll t,i,n,j,flag=0,mx=0,mn=1e9+7,sumt=0,sum=0;
     cin >> n;
     ll arr[n];
     for (i = 0; i < n;i++)
{

    cin >> arr[i];

}
ll p1 = 0, p2 = n - 1,suml=0,sumr=0;
while(p2>=p1)
{
if(suml==sumr)
{
    suml += arr[p1];
    p1++;

}
else if(suml>sumr)

{
    sumr += arr[p2--];

}
else
{
    suml += (arr[p1++]);
}


}
cout << p1 << " " << n-p1;
return 0;
    }