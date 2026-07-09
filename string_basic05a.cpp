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
	char rev[30];
	int cnt = 0;
	int revi = 0;

	for (int i = s.size() - 1; i >= 0; --i) {
		rev[revi] = s[i];
		revi++;
		cnt++;
		if (cnt == 3 && i != 0) {
			cnt = 0;
			rev[revi] = ',';
			revi++;
		}
	}

	for (int i = revi - 1; i >= 0; --i) {
		std::cout << rev[i];
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