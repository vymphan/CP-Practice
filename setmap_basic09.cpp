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
	std::map<std::pair<int, int>, int> mp;
	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		std::pair<int, int> p = std::make_pair(x, y);
		mp[p]++;
	}
	for (const auto &p : mp) {
		std::cout << p.first.first << " " << p.first.second << " " << p.second << endl;
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