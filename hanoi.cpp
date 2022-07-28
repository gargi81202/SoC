#include <iostream>

using namespace std;

int twop(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        x *= 2;
    }
    return x;
}

void hanoi(int src, int extra, int dest, int n)
{
    if (n == 1)
    {
        cout << src << ' ' << dest << endl;
        return;
    }
    hanoi(src, dest, extra, n - 1);
    cout << src << ' ' << dest << endl;
    hanoi(extra, src, dest, n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << twop(n) - 1 << endl;
    hanoi(1, 2, 3, n);
}