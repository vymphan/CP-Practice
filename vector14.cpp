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

std::vector<char> nhap() {
	std::vector<char> vc;
	char c;
	while (std::cin >> c) {
		vc.push_back(c);
	}
	return vc;
}

std::vector<char> thaydoi(std::vector<char> &v) {
	for (char &c : v) {
		if (c >= 'a' && c <= 'z') {
			c -= 32;
		} else if (c >= 'A' && c <= 'Z') {
			c += 32;
		}
	}

	return v;
}

void in(const std::vector<char> &v) {
	for (const char c : v) {
		std::cout << c << " ";
	}
}

void Solve() {
	std::vector<char> v = nhap();
	std::vector<char> res = thaydoi(v);
	in(res);
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