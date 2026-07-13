#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using ll = long long;
#define endl '\n'



bool checkDistance(std::string s) {
	for (int i = 1; i < (int) s.size(); ++i) {
		int num = s[i] - '0';
		int prev = s[i-1] - '0';
		if (std::abs(num - prev) == 3) {
			return false;
		}
	}
	return true;
}

bool check28adjacent(std::string s) {
	for (int i = 1; i < (int) s.size(); ++i) {
		if ((s[i] == 2 && s[i-1] == 8) || (s[i] == 8 && s[i-1] == 2))
			return false;
	}
	return true;
}

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::string s;
	while (std::getline(std::cin, s)) {
		bool check1 = false;
		// first and last are both even or odd
		int first = s[0] - '0';
		int last = s[s.size()-1] - '0';
		if ((first % 2 == 0 && last % 2 == 0) || (first % 2 != 0 && last % 2 != 0))
			check1 = true;
		// check distance
		bool check2 = checkDistance(s);
		// check 2 & 8
		bool check3 = check28adjacent(s);
		std::cout << (check1 && check2 && check3 ? "YES\n" : "NO\n");
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