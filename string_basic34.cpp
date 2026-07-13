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
	while (std::getline(std::cin, s)) {
		mp[s]++;
	}
	for (const auto &[name, freq] : mp) {
		std::cout << name << " " << freq << endl;
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