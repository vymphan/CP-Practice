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
		if (num % i == 0)
			return false;
	}
	return true;
}

bool AreAllDigitsPrime(int num) {
	if (num < 2) {
		return false;
	}
	while (num != 0) {
		int last = num % 10;
		if (last != 2 && last != 3 && last != 5 && last != 7) {
			return false;
		}
		num /= 10;
	}
	return true;
}

void Solve() {
	int a, b;
	std::cin >> a >> b;

	int cnt = 0;
	for (int i = a; i <= b; i++) {
		if (AreAllDigitsPrime(i) && IsPrime(i)) {
			cnt++;
		}
	}
	std::cout << cnt;
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