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


void solve(int w, int x, int y, int z){
    unordered_set <int> s;
    s.insert(x);
    s.insert(y);
    s.insert(z);
    s.insert(x+y);
    s.insert(x + z);
    s.insert(y + z);
    s.insert(x + y + z);

    if (s.find(w) != s.end()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        solve (w, x, y, z);
    }
}
