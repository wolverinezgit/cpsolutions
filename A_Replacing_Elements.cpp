#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        int sum;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > d)
            {
                for (int k = 0; k < j - 1; k++)
                {
                    for (int l = k + 1; l < j; l++)
                    {
                        sum = a[l] + a[k];
                        if (sum <= d)
                        {
                            a[j] = sum;
                        }
                    }
                }
            }
        }
        sort(a, a + n);
        if (a[n - 1] <= d)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}