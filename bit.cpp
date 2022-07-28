#include <iostream>

using namespace std;

long long int p(int n)
{
    long long int x = 1;
    for (int i = 0; i < n; i++) 
    {
        x *= 2;
        x = x % 1000000007;
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    cout << p(n) << endl;
}