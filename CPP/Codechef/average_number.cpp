/*                "Eat, sleep, code, repeat."
*
*                          _oo0oo_
*                         o8888888o
*                         88" . "88
*                         (| -_- |)
*                         0\  =  /0
*                       ___/`---'\___
*                     .' \|     |// '.
*                    / \|||  :  |||// \
*                   / _||||| -:- |||||- \
*                  |   | \\  -  /// |   |
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


void solve(ll n, ll k, ll v, ll arr[]) {
	ll s = v * (n + k);
	ll s1  = 0;
	for (int i = 0; i < n; ++i)
	{
		s1 += arr[i];
	}
	ll ans = (s - s1) / k;
	if ((s - s1) % k != 0 || (s - s1) <= 0)
	{
		cout << -1 << endl;
		return;
	}
	cout << ans << endl;
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
		ll n, k, v;
		cin >> n >> k >> v;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			ll a;
			cin >> a;
			arr[i] = a;
		}
		solve (n, k, v, arr);
	}
}