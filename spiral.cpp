#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int r, c;
        cin >> r >> c;
        if (c > r)
        {
            if (c % 2) cout << c*c + 1 - r << endl;
            else cout << (c - 1)*(c - 1) + r << endl;
        }
        else 
        {
            if (!(r % 2)) cout << r*r + 1 - c << endl;
            else cout << (r - 1)*(r - 1) + c << endl;
        }
    }
}