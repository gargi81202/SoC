#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    char output[n];
    int a[26];
    bool odd[26];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
        odd[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
        odd[s[i] - 'A'] = !odd[s[i] - 'A'];
    }
    int i;
    for (i = 0; i < 26; i++)
    {
        if (odd[i])
        {
            for (int j = i + 1; j < 26; j++)
            {
                if (odd[j]) 
                {
                    cout << "NO SOLUTION\n";
                    return 0;
                }
            }
            break;
        }
    }
    int pointer = 0;
    if (i < 26)
    {
        output[n/2] = 'A' + i;
        a[i]--;
    }
    for (int j = 0; j < 26; j++)
    {
        if (a[j])
        {
            for (int k = 0; k < a[j] / 2; k++)
            {
                output[pointer + k] = 'A' + j;
                output[n - pointer - 1 - k] = 'A' + j;
            }
            pointer += a[j] / 2;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << output[j];
    }
    cout << endl;
}