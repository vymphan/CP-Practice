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
	std::getline(std::cin, s);
	std::string s1 = s;
	std::string s2 = s;
	for (int i = 0; i < (int) s.size(); ++i) {
		if (std::isalpha(s[i])) {
			s1[i] = std::toupper(s1[i]);
			s2[i] = std::tolower(s2[i]);
		}
	}
	std::cout << s1 << endl << s2 << endl;
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