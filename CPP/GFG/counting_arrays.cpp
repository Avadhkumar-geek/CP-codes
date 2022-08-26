/*                "Eat, sleep, code, repeat."
*
*                          _oo0oo_
*                         o8888888o
*                         88" . "88
*                         (| -_- |)
*                         0\  =  /0
*                       ___/`---'\___
*                     .' \\|     |// '.
*                    / \\|||  :  |||// \
*                   / _||||| -:- |||||- \
*                  |   | \\\  -  /// |   |
*                  | \_|  ''\---/''  |_/ |
*                  \  .-\__  '-'  ___/-. /
*                ___'. .'  /--.--\  `. .'___
*             ."" '<  `.___\_<|>_/___.' >' "".
*            | | :  `- \`.;`\ _ /`;.`/ - ` : | |
*            \  \ `_.   \_ __\ /__ _/   .-` /  /
*        =====`-.____`.___ \_____/___.-`___.-'=====
*                          `=---='
*/
// https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve(int a[], int b[], int m, int n){
    sort(b, b+n);
    vector <int> ans;
    for (int i = 0; i < m; ++i)
    {
        int r = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[i] >= b[j])
            {
                r++;
            }else{
                break;
            }
        }
        cout << endl;
        ans.push_back(r);
    }
    for (auto e : ans){
        cout << e << " ";
    }
    cout << endl;
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int m,n;
        int a[m];
        int b[n];
        cin >> m >>n;
        for (int i = 0; i < m; ++i)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        for (int i = 0; i < n; ++i)
        {
            int y;
            cin >> y;
            b[i] = y;
        }
        solve (a, b, m, n);
    }
}
