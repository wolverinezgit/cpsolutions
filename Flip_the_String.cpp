#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mp make_pair
#define pb push_back
#define fast_cin()                    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL)

int main()
{
    fast_cin();
    ll t, i, n, j, flag = 0, mx = 0, mn = 1e9 + 7;
   

    cin >> t;
    
        while (t--)
        {

            string A, B;
            cin >> A;
            
            cin >> B;
            
            int count = 0;
            int ans = 0;
            int len = 0;
            map<int, int> odd;
            map<int, int> even;
            int count1 = 0, count2 = 0;
            for (int i = 0; i < A.length(); i++)
            {
                if (A[i] != B[i])
                {

                    while (i < A.length())
                    {

                        if ((i + 1) % 2 == 0)
                        {
                            if (A[i] != B[i])
                            {
                                odd[count1]++;
                            }
                           
                            else if ((A[i] == B[i]) && odd.size() > 0)
                            {
                               
                                count1++;
                                
                            }
                        }

                        else
                        {
                            if (A[i] != B[i])
                            {

                                even[count2]++;
                            }
                            else if ((A[i] == B[i]) && even.size() > 0)
                            {
                                count2++;
                               
                            }
                        }
                        i++;
                    }
                }
            }
            

            cout << odd.size() + even.size() << "\n";
           
        }
        return 0;
    }