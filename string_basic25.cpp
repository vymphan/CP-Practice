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

bool check(std::string s) {
	if (s.size() < 10 || s.size() > 11 || s[0] != '0') {
		return false;
	}

	for (const char &c : s) {
		if (!isdigit(c)) {
			return false;
		}
	}
	return true;
}

void Solve() {
	int n;
	std::cin >> n;
	std::string s;
	while (n--) {
		std::cin >> s;
		std::cout << (check(s) ? "YES\n" : "NO\n");
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