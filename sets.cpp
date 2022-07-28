#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum;
    if (n % 2) sum = (n+1)/2*n;
    else sum = n/2*(n+1);
    //cout << sum << endl;
    if (sum % 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        int s1[n];
        long long int i1 = 0, i2 = n;
        long long int half = sum / 2;
        while (half >= i2)
        {
            half -= i2;
            s1[i1] = i2;
            i2--;
            i1++;
        }
        if (half) 
        {
            s1[i1] = half;
            i1++;
        }
        cout << i1 << endl;
        for (int i = 0; i < i1; i++)
        {
            cout << s1[i] << ' ';
        }
        cout << endl;
        if (half) cout << i2 - 1 << endl;
        else cout << i2 << endl;
        for (int i = 1; i <= i2; i++)
        {
            if (i == half) continue;
            cout << i << ' ';
        }
        cout << endl;
    }
}