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

int countOdd(int num) {
	int cnt = 0;
	while (num != 0) {
		if (num % 2 != 0) {
			cnt++;
		}
		num /= 10;
	}
	return cnt;
}

bool cmp(int a, int b) {
	if (countOdd(a) != countOdd(b)) {
		return countOdd(a) > countOdd(b);
	}
	return a < b;
}

void Solve() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int &val : v) {
		std::cin >> val;
	}

	std::sort(v.begin(), v.end(), cmp);
	for (const int &val : v) {
		std::cout << val << " ";
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