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
	std::string s1, s2;
	std::cin >> s1 >> s2;
	if (s1.size() != s2.size()) {
		std::cout << "29tech\n";
		return;
	}
	std::sort(s1.begin(), s1.end());
	std::sort(s2.begin(), s2.end());
	bool check = true;
	for (int i = 0; i < (int) s1.size(); ++i) {
		if (s1[i] != s2[i]) {
			check = false;
			break;
		}
	}

	std::cout << (check ? "28tech\n" : "29tech\n");
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