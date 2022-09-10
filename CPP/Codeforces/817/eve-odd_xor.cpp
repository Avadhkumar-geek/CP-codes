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
*                  |   | \  -  /// |   |
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
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; ++i)
#define rfor(i, n) for (int i = n; i >= 0; --i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define rloop(i,a,b) for (int i = a ; i>=b; --i)
#define tc(t) int t; cin >> t; while (t--)
#define ll long long
#define ins insert
#define pb emplace_back
#define mk make_pair
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rr return
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define f first
#define s second
#define endl "\n"
#define pii pair<int, int>
#define vii vector<int, int>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)

const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}

template<typename... T>
void in(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void out(T&&... args) {
	((cout << args << " "), ...);
}

template<typename... T>
void outl(T&&... args) {
	((cout << args << endl), ...);
}

bool isPrime(int N) { for (int i = 2; i * i <= N; ++i) {if (N % i == 0) return false;} return true;}

void swap(ll &x, ll &y) {
	ll temp = y;
	y = x;
	x = temp;
}

ll powa(ll a, ll b, ll m = MOD) {
	if (b == 0)
		return 1ll;
	else if (b == 1)
		return a;
	else
	{
		ll x = powa(a, b / 2, m);
		x *= x;
		// x %= m;
		if (b % 2)
		{
			x *= a;
			// x %= m;
		}
		return x;
	}
}

void solve(int n) {
	int x;
	while (n) {
		n -= 2, x = 1610612736;
		while (--n){
			x ^= n;
			out(n);
		} 
		cout << x <<  " 1073741824 536870912" << endl;
	}
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fio;
	tc(t) {
		int n;
		in(n);
		solve(n);
	}
}