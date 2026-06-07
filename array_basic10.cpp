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

bool IsPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i < n-1; i++) {
		// left side of i
		int sum_left = 0;
		for (int j = 0; j < i; j++) {
			sum_left += arr[j];
		}
		int sum_right = 0;
		// right side of i
		for (int j = i + 1; j < n; j++) {
			sum_right += arr[j];
		}

		if (IsPrime(sum_left) && IsPrime(sum_right))
			std::cout << i << " ";
	}

	delete[] arr;
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