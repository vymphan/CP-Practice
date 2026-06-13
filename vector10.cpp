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
	std::vector<std::pair<char, int>> v;
	for (int i = 0; i < n; i++) {
		char c;
		std::cin >> c;

		// Check
		bool check = false;
		if (!v.empty()) {
			for (auto &p : v) {
				if (p.first == c) {
					p.second++;
					check = true;
					break;
				}
			}
		}
		if (!check) {
			v.push_back(std::make_pair(c, 1));
		}
	}
	std::cout << v.size() << endl;
	for (const auto &p : v) {
		std::cout << p.first << " " << p.second << endl;
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