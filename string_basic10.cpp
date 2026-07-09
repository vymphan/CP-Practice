#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>

using ll = long long;
#define endl '\n'

void Solve() {
	std::string s;
	std::cin >> s;
	std::unordered_set<char> se;

	for (const char &c : s) {
		if (se.count(c)) {
			std::cout << c;
			return;
		}
		se.insert(c);
	}

	std::cout << "NONE";
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