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
	int maxlen = 0;
	char bestchar = s[0];
	int n = s.size();
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (i == 0 || s[i] == s[i - 1]) {
			cnt++;
		} else {
			cnt = 1;
		}

		if (cnt > maxlen) {
			maxlen = cnt;
			bestchar = s[i];
		} else if (cnt == maxlen) {
			if (s[i] > bestchar) {
				bestchar = s[i];
			}
		}
	}
	std::string result(maxlen, bestchar);
	std::cout << result << endl;
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