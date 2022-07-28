#include <iostream>
#include <string>

using namespace std;

int fac(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x *= i;
    }
    return x;
}

void allp(string s, string r = "")
{
    if (s.length() == 0) return;
    else if (s.length() == 1)
    {
        cout << r << s << endl;
        return;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            string a, b;
            for (int j = 0; j < i; j++)
            {
                a += s[j];
            }
            for (int j = i + 1; j < s.length(); j++)
            {
                b += s[j];
            }
            string k = a + b;
            string kr;
            kr += s[i];
            allp(k, kr); 
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    int num = fac(n);
    for (int i = 0; i < 26; i++)
    {
        num = num / fac(a[i]);
    }
    cout << num << endl;
    string first;
    for (int i = 0; i < 26; i++)
    {
        char x = 'a' + i;
        for (int j = 0; j < a[i]; j++)
        {
            first += x;
        }
    }
    cout << first << endl;
    allp(first);
}