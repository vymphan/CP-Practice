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
	int n;
	std::cin >> n;
	std::vector<int> v;
	for (int i = 0; i < n; ++i) {
		int temp;
		std::cin >> temp;
		v.push_back(temp);
	}

	std::map<int, int> mp;
	for (const auto& val : v) {
		mp[val]++;
	}

	auto it = std::max_element(
		mp.begin(), mp.end(),
		[](std::pair<int, int> p1, std::pair<int, int> p2) {
			return p1.second < p2.second;
		});
	std::cout << it->first << " " << it->second << endl;
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