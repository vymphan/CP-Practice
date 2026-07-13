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
	std::map<std::string, int> mp;
	std::vector<std::string> v;
	while (std::cin >> s) {
		mp[s]++;
		if (mp[s] == 1)
			v.push_back(s);
	}

	for (const auto &word : v) {
		std::cout << word << " " << mp[word] << endl;
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