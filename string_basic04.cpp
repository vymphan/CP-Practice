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

bool check(const std::string &s) {
	for (int i = 1; i < (int) s.size(); ++i) {
		if (std::abs(s[i] - s[i-1]) != 1)
			return false;
	}
	return true;
}

void Solve() {
	std::string s;
	std::cin >> s;
	std::cout << (check(s) ? "YES" : "NO") << endl;
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