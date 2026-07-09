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

	for (int i = 0; i < (int) s.size(); ++i) {
		if (std::isdigit(s[i]))
			std::cout << s[i];
	}
	std::cout << endl;
	for (int i = 0; i < (int) s.size(); ++i) {
		if (std::isalpha(s[i]))
			std::cout << s[i];
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