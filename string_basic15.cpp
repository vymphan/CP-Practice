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

std::string reverseStr(const std::string &s) {
	std::string res;
	for (int i = s.size() - 1; i >= 0; --i) {
		res.push_back(s[i]);
	}
	return res;
}

void Solve() {
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	int order = 0;
	std::string word;
	while (ss >> word) {
		order++;
		if (order % 2 == 0) {
			std::cout << reverseStr(word);
		} else {
			std::cout << word;
		}
		std::cout << " ";
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