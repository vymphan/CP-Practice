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

ll CountDivisor(ll n, ll e) {
	if (e == 2) {
		return n / 2;
	}
	ll res = 0;
	while (n % e == 0) {
		++res;
		n /= e;
	}
	return res;
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	ll cnt2 = 0;
	ll cnt5 = 0;
	for (int i = 0; i < n; i++) {
		cnt2 += CountDivisor(arr[i], 2);
		cnt5 += CountDivisor(arr[i], 5);
	}
	std::cout << std::min(cnt2, cnt5);
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