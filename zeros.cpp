#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int z = 0, f = 5;
    while (n >= f)
    {
        z += n / f;
        f *= 5;
    }
    cout << z << endl;
}