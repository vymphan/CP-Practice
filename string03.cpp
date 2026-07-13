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
	std::string s;
	std::cin >> s;
	std::map<char, int> mp;
	std::vector<char> v;
	for (const char &c : s) {
		mp[c]++;
		if (mp[c] == 1)
			v.push_back(c);
	}

	for (const auto &[c, freq] : mp) {
		std::cout << c << " " << freq << endl;
	}
	std::cout << endl;

	for (const auto &c : v) {
		std::cout << c << " " << mp[c] << endl;
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