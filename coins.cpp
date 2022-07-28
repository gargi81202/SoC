#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if ((a + b) % 3) cout << "NO\n";
        else if (abs(a - b) > min(a, b)) cout << "NO\n";
        else cout << "YES\n";
    }
}