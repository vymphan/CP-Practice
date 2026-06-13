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

void Solve() {
	int n;
	std::cin >> n;
	std::vector<std::pair<std::pair<int, int>, int>> v(n);
	for (auto &xyz : v) {
		std::cin >> xyz.first.first >> xyz.first.second >> xyz.second;
	}

	for (int i = 0; i < n; i++) {
		std::cout << v[i].first.first + v[i].first.second + v[i].second << " ";
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