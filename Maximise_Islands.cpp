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

int dist(pair<int, int> &p1,
         pair<int, int> &p2)
{

    return abs(p1.first - p2.first) + abs(p2.second - p1.second) - 1;
}

// Function to implement floodfill algorithm
void floodfill(set<pair<int, int>> &hash,
               int i, int j,
               vector<vector<char>> &A)
{

    // Base Case
    if (i < 0 || i >= A.size() || j < 0 || j >= A[0].size() || A[i][j] != 'L')
    {
        return;
    }

    // Mark the current node visited
    A[i][j] = 'V';

    // Store the coordinates of in the
    // hash set
    hash.insert(make_pair(i, j));

    // Recursively iterate for the next
    // four directions
    floodfill(hash, i - 1, j, A);
    floodfill(hash, i + 1, j, A);
    floodfill(hash, i, j - 1, A);
    floodfill(hash, i, j + 1, A);
}

// Funtion to find the minimum 'W' to flipped
void findMinimumW(vector<vector<char>> &A)
{

    // Base Case
    if (A.size() == 0)
        return;

    // Two sets to store the coordinates of
    // connected island
    set<pair<int, int>> hash1, hash2;

    // Traversing the given grid[][]
    for (int i = 0; i < A.size(); i++)
    {

        for (int j = 0; j < A[0].size(); j++)
        {

            // If an island is found
            if (A[i][j] == 'L')
            {

                // Floodfill Algorithm for
                // the first island
                if (hash1.empty())
                {
                    floodfill(hash1, i, j, A);
                }

                // Floodfill Algorithm for
                // the second island
                if (hash2.empty() && !hash1.count({i, j}))
                {
                    floodfill(hash2, i, j, A);
                }
            }
        }
    }

    // To store the minimum count of 'W'
    int ans = INT_MAX;

    // Traverse both pairs of hashes
    for (auto i : hash1)
    {
        for (auto j : hash2)
        {
            ans = min(ans, dist(i, j));
        }
    }

    // Print the final answer
    cout << ans << endl;
}

int main()
{
 fast_cin();
 ll t,i,n,j,flag=0,mx=0,mn=1e9+7;
 cin >> t;
while(t--){
    ll n1, m1;
    cin >> n1 >> m1;
    vector<vector<char>> arr;
    for (i = 0; i < n1;i++)
{
    vector<char> temp;
    for (i = 0; i < m1;i++)
        char ch = z;
    temp.pb(z);
}
        findMinimumW(arr);
}
 return 0;
}