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

bool cmp(std::string a, std::string b) {
	if (a.size() != b.size())
		return a.size() < b.size();
	return a < b;
}

void Solve() {
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	std::string word;
	std::vector<std::string> v;
	while (ss >> word) {
		v.push_back(word);
	}

	std::sort(v.begin(), v.end(), cmp);
	for (const auto &word : v) {
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