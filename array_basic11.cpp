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

void CreateFibonacciArr(ll fib[]) {
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= 92; i++) {
		fib[i] = fib[i-1] + fib[i-2];
 	}
}

void Solve() {
	int n;
	std::cin >> n;
	ll* arr = new ll[n];
	ll fib[93] = {0};
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	CreateFibonacciArr(fib);

	for (int i = 0; i < n; i++) {

		bool check = false;
		for (int j = 0; j <= 92; j++) {
			if (check || fib[j] > arr[i])
				break;
			if (arr[i] == fib[j])
				check = true;
		}

		if (check) {
			std::cout << arr[i] << " ";
		}
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