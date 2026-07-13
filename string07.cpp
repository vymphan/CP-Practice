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
	int left = 0;
	int right = s.size() - 1;
	bool check = true;
	while (left < right) {
		if (s[left] != s[right])
			check = false;
		left++;
		right--;
	}
	std::cout << (check ? "YES\n" : "NO\n");
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