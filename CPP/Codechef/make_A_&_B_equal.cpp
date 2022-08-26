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
// https://www.codechef.com/problems/MAKEABEQUAL

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

void solve(int n, vector<int> a, vector<int> b){
    ll diff = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {   
        diff += a[i] - b[i];
        sum += abs(a[i] - b[i]);
    }

    if (diff == 0)
    {
        cout << sum / 2<< endl;
    }else{
        cout << -1 << endl;
    }
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
        int n;
        vector <int> a;
        vector<int> b;
        cin >> n;
        for (int i = 0; i <n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i <n; i++){
            int y;
            cin >> y;
            b.push_back(y);
        }
        solve (n, a, b);
    }
}
