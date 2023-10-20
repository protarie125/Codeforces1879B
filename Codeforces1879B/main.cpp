#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

constexpr auto Inf = ll{ 9'987'654'321 };

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll t;
	cin >> t;
	while (0 < (t--)) {
		ll n;
		cin >> n;

		ll sumA = 0;
		ll minA = Inf;
		for (auto i = 0; i < n; ++i) {
			ll x;
			cin >> x;

			sumA += x;
			minA = min(minA, x);
		}

		ll sumB = 0;
		ll minB = Inf;
		for (auto i = 0; i < n; ++i) {
			ll x;
			cin >> x;

			sumB += x;
			minB = min(minB, x);
		}

		const auto ans1 = sumA + n * minB;
		const auto ans2 = sumB + n * minA;

		cout << (ans1 < ans2 ? ans1 : ans2) << '\n';
	}

	return 0;
}