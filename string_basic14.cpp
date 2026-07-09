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

std::string tolower(const std::string &s) {
	std::string res;
	for (const char &c : s) {
		res.push_back(std::tolower(c));
	}
	return res;
}

void Solve() {
	std::string s;
	std::getline(std::cin, s);

	std::stringstream ss(s);
	std::string word;
	int cnt = 0;
	while (ss >> word) {
		if (tolower(word) == "28tech")
			cnt++;
	}
	std::cout << cnt;
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