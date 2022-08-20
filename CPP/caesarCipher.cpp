#include <bits/stdc++.h>
using namespace std;

string encr(string str, int key)
{
    string cipher = "";
    for (char c : str)
    {
        if (isupper(c))
        {
            cipher += char(((c - 'A') + key) % 26 + 65);
        }
        else
        {
            cipher += char(((c - 'a') + key) % 26 + 97);
        }
    }
    return cipher;
}

int main()
{
    string s;
    int k;
    cin >> s;
    cin >> k;
    cout << encr(s, k) << "\n";

    return 0;
}