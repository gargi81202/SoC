#include <bits/stdc++.h>

using namespace std;

const int N = 1000000;
long long l[N + 1];

void initialise()
{
    l[0] = 0;
    l[1] = 1;
    for (int i = 2; i < N + 1; i++)
    {
        l[i] = -1;
    }
}

long long ways(int n)
{
    if (n < 0) return -1;
    if (l[n] >= 0) return l[n];
    long long int w = 0;
    for (int i = 0; i < 6; i++)
    {
        long long int x = ways(n - 1 - i);
        if (x > 0) w = (w + x) % 1000000007;
    }
    if (n < 7) w++;
    l[counter] = w;
    return w;
}

int main()
{
    initialise();
    int n;
    cin >> n;
    cout << ways(n) << endl;
}