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

bool ispalindrome(std::string s) {
	int left = 0;
	int right = s.size() - 1;
	while (left < right) {
		if (s[left] != s[right])
			return false;
		left++;
		right--;
	}
	return true;
}

void Solve() {
	std::string s;
	std::cin >> s;
	std::cout << std::boolalpha << ispalindrome(s) << endl;
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