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
	int n, m;
	std::cin >> n >> m;
	std::vector<int> va(n);
	std::set<int> sb;
	for (int i = 0; i < n; i++) {
		std::cin >> va[i];
	}
	for (int i = 0; i < m; i++) {
		int x;
		std::cin >> x;
		sb.insert(x);
	}
	for (auto it = va.begin(); it != va.end(); ++it) {
		if (sb.count(*it))
			std::cout << "28tech ";
		else
			std::cout << "29tech ";
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