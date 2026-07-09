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
	std::vector<int> a(n);
	std::multiset<int> b;
	for (int &x : a) {
		std::cin >> x;
	}
	for (int i = 0; i < m; ++i) {
		int x;
		std::cin >> x;
		b.insert(x);
	}

	for (const int x : a) {
		std::cout << b.count(x) << " ";
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