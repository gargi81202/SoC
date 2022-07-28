#include <bits/stdc++.h>

using namespace std;

const int n = 8;

int c = 0;

bool columns[n], dr[2*n - 1], dl[2*n - 1];

void initialize()
{
    for (int i = 0; i < n; i++)
    {
        columns[i] = 0;
    }
    for (int i = 0; i < 2*n - 1; i++)
    {
        dl[i] = dr[i] = 0;
    }
}

void search(int y = 0)
{
    if (y == n)
    {
        c++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (columns[x] || dr[n - 1 + x - y] || dl[x + y]) continue;
        columns[x] = dr[n - 1 + x - y] = dl[x + y] = 1;
        search(y + 1);
        columns[x] = dr[n - 1 + x - y] = dl[x + y] = 0;
    }
}

int main()
{
    initialize();
    search();
    cout << c << '\n';
}