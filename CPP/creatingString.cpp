#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<string> perms;
string a;

void perm(int left, int right)
{
    if (left == right)
    {
        perms.insert(a);
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(a[left], a[i]);
            perm(left + 1, right);
            swap(a[left], a[i]);
        }
    }
}

signed main()
{
    cin >> a;
    perm(0, (int)a.size() - 1);
    cout << (int)perms.size() << "\n";
    for (string s : perms)
    {
        cout << s << "\n";
    }

    return 0;
}