#include <bits/stdc++.h>

using namespace std;

long long num[1000001];

void initialize(int c[], int n)
{
    for (int i = 1; i < 1000001; i++)
    {
        num[i] = -2; //-2 means we don't have the answer for this yet
    }
    num[0] = 0;
    for (int i = 0; i < n; i++)
    {
        num[c[i]] = 1;
    }
}

long long int f(int x, int n, int c[])
{
    if (x < 0) return -1; // -1 means this sum is not possible
    if (num[x] >= -1) return num[x];
    long long int N = 1000001;
    for (int i = 0; i < n; i++)
    {
        long long int t = f(x - c[i], n, c);
        if (t >= 0)
        {
            N = min(N, 1 + t);
        }
    }
    num[x] = N;
    if (N == 1000001) num[x] = -1;
    return num[x];
}

int main()
{
    int n, x;
    cin >> n >> x;
    int c[n], m = 1000000;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        m = min(m, c[i]);
    }
    initialize(c, n);
    cout << f(x, n, c) << endl;
}