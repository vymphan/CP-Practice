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

std::string reverse(const std::string &s) {
	std::string res = s;
	int left = 0;
	int right = res.size() - 1;
	while (left < right) {
		std::swap(res[left], res[right]);
		left++;
		right--;
	}
	return res;
}

std::string toupper(const std::string &s) {
	std::string res = s;
	for (char &c : res) {
		c = std::toupper(c);
	}
	return res;
}

std::string tolower(const std::string &s) {
	std::string res = s;
	for (int i = 0; i < (int) res.size(); ++i) {
		res[i] = std::tolower(res[i]);
	}
	return res;
}

void Solve() {
	std::string s;
	std::cin >> s;

	std::cout << reverse(s) << endl;
	std::cout << tolower(s) << endl;
	std::cout << toupper(s) << endl;
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