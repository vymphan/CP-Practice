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
	std::string s1, s2;
	std::cin >> s1 >> s2;
	int flag1[256] = {0};
	int flag2[256] = {0};
	for (const char &c : s1) {
		flag1[(int) c] = 1;
	}
	for (const char &c : s2) {
		flag2[(int) c] = 1;
	}

	for (int i = 0; i < 256; ++i) {
		if (flag1[i] && flag2[i])
			std::cout << (char) i;
	}
	std::cout << endl;

	for (int i = 0; i < 256; ++i) {
		if (flag1[i] || flag2[i])
			std::cout << (char) i;
	}
	std::cout << endl;
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