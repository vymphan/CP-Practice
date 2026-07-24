#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>

using ll = long long;
#define endl '\n'

void Solve() {
	std::string s;
	std::cin >> s;
	std::map<char, int> mp;
	for (const char& c : s) {
		mp[c]++;
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