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
	std::map<char, int> mp;
	for (const char &c : s1) {
		mp[c] = 1;
	}
	for (const char &c : s2) {
		if (mp[c] == 1)
			mp[c] = 3;
		else if (mp[c] == 0)
			mp[c] = 2;

	}
	for (const auto &[c, freq] : mp) {
		if (mp[c] == 3) {
			std::cout << c;
		}
	}
	std::cout << endl;

	for (const auto &[c, freq] : mp) {
		std::cout << c;
	}
	std::cout << endl;
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