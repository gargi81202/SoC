#include <bits/stdc++.h>

using namespace std;

int maxdigit(int x)
{
    int m = x % 10;
    while (x > 0)
    {
        x = x / 10;
        m = max(m, x % 10);
    }
    return m;
}

int steps[1000001];

void initialize()
{
    steps[0] = 0;
    for (int i = 1; i < 10; i++)
    {
        steps[i] = 1;
    }
    for (int i = 10; i < 1000001; i++)
    {
        steps[i] = -1;
    }
}

int num_steps(int n)
{
    if (steps[n] >= 0) return steps[n];
    steps[n] = 1 + num_steps(n - maxdigit(n));
    return steps[n];
}

int main()
{
    int n;
    cin >> n;
    initialize();
    cout << num_steps(n) << '\n';
}