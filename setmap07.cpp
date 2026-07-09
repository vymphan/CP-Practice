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
	int n;
	std::cin >> n;
	std::map<int, int> mpa;
	std::map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int x;
		for (int j = 0; j < n; j++) {
			std::cin >> x;
			if (i == 0) {
				mpa[x] = 1;
			} else {
				if (mpa[x]) {
					mp[x] = i+1;
				}
			}
		}

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