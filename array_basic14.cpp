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

int findGCD(int a, int b) {
	if (a == 0 || b == 0)
		return a + b;
	while (b != 0) {
		int rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	int gcd = 0;
	for (int i = 0; i < n; i++) {
		gcd = findGCD(gcd, arr[i]);
	}
	std::cout << gcd << endl;

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