#include <bits/stdc++.h>

using namespace std;

long long ways[1000001];

void initialize()
{
    for (int i = 1; i < 1000001; i++)
    {
        ways[i] = -1;
    }
    ways[0] = 1;
}

long long findways(int x, int c[], int n)
{
    if (x < 0) return 0;
    if (ways[x] >= 0) return ways[x];
    ways[x] = 0;
    for (int i = 0; i < n; i++)
    {
        if (findways(x - c[i], c, n) > 0) ways[x] = (ways[x] + findways(x - c[i], c, n)) % 1000000007;
    }
    return ways[x];
}

int main()
{
    int n, x;
    cin >> n >> x;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    initialize();
    cout << findways(x, c, n) << endl;
}