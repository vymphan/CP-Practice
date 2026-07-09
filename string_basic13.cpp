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
	std::getline(std::cin, s);
	for (char &c : s) {
		if (c == '.' || c == ',' || c == '!' || c == '?')
			c = ' ';
	}
	std::stringstream ss(s);
	std::string word;
	while (ss >> word) {
		std::cout << word << " ";
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