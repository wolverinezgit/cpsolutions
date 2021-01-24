#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int t;
cin>>t;
while(t--)
{

    long long int n, m;
    cin >> n;
    long long int arr[n];
    long long int i, j, sum = 0,diff=0;
map<long long,long long>m;

    for (i = 0; i < m;i++)
{

    
        cin >> arr[i];
        m[arr[i]]++;
    }

 


    sum = sum / (m * n);
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            diff += abs(arr[i][j] - sum);
        }
}
cout << diff << endl;
}

}

