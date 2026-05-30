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

bool IsPrime(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i <= std::sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

void Solve() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		for (int j = 2; j <= n / 2; j++) {
			if (IsPrime(j) && IsPrime(n-j)) {
				std::cout << j << " " << n - j << endl;
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