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
	int r, q;
	std::cin >> r >> q;

	std::vector<std::vector<int>> vv;
	for (int i = 0; i < r; i++) {
		int n;
		std::cin >> n;
		std::vector<int> temp_v;
		for (int j = 0; j < n; j++) {
			int x;
			std::cin >> x;
			temp_v.push_back(x);
		}
		vv.push_back(temp_v);
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		std::cin >> x >> y;
		std::cout << vv[--x][--y] << endl;
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