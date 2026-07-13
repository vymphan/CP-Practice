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
	int flag[100] = {0};
	if (s.size() < 26) {
		std::cout << "NO\n";
		return;
	}

	for (const char &c : s) {
		flag[std::toupper(c)] = 1;
	}
	bool check = true;
	for (int i = 'A'; i <= 'Z'; ++i) {
		if (flag[i] == 0) {
			check = false;
			break;
		}
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