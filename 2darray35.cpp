#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using ll = long long;
#define endl '\n'
using twoDarray = std::vector<std::vector<int>>;

void Solve() {
	int n, m;
	std::cin >> n >> m;
	twoDarray m1(n, std::vector<int>(m, 0));
	twoDarray m2(n, std::vector<int>(m, 0));
	std::vector<std::vector<ll>> res(n, std::vector<ll>(m, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> m1[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> m2[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			res[i][j] = 1ll * m1[i][j] * m2[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << res[i][j] << " ";
		}
		std::cout << endl;
	}

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    // int t;
    // std::cin >> t;
    // while (t--)
    Solve();

    return 0;
}