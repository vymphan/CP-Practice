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
	std::set<std::string> se;
	std::map<std::string, int> mp;
	std::string word;
	while (std::cin >> word) {
		se.insert(word);
		mp[word]++;
	}

	int maxn = -1;
	for (const auto &[data, freq] : mp) {
		if (freq > maxn)
			maxn = freq;
	}

	for (const auto &val: se) {
		if (mp[val] == maxn) {
			std::cout << val << endl;
		}
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