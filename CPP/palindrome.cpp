#include <iostream>
using namespace std;

string isPalindrome(string str)
{
    for (int i = 0; i < str.size() / 2; ++i)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            return "non-Palindrome";
            break;
        }
    }
    return "Palindrome";
}
int main()
{
    string str;
    cin >> str;
    cout << isPalindrome(str);
    return 0;
}
