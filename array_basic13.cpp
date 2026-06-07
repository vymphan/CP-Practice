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
	const int kmod = 1e9+7;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	ll sum = 0;
	ll mul = 1;
	for (int i = 0; i < n; i++) {
		sum = (sum + arr[i]) % kmod;
		mul = (mul * arr[i]) % kmod;
	}
	std::cout << sum << " " << mul;

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