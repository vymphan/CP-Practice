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
	std::getline(std::cin , s);
	std::stringstream ss(s);
	std::vector<std::string> v;
	std::string word;
	while (ss >> word) {
		v.push_back(word);
	}
	std::sort(v.begin(), v.end());
	for (auto word : v) {
		std::cout << word << " ";
	}
	std::cout << endl;
	std::sort(v.begin(), v.end(), std::greater<std::string>());
	for (auto word : v) {
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