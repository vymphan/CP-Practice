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
	std::set<std::string, std::greater<std::string>> se;
	for (int i = 0; i < n; ++i) {
		std::string word;
		std::cin >> word;
		se.insert(word);
	}
	std::string res = "";
	for (const auto& word : se) {
		if (word + res > res + word) {
			res = word + res;
		} else {
			res = res + word;
		}
	}
	std::cout << res;
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