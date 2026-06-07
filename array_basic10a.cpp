// using prefix sum

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

void CalculatePrefixSum(const int arr[], int psum[], const int n) {
	psum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		psum[i] = psum[i-1] + arr[i];
	}
}

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
	int* psum = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	CalculatePrefixSum(arr, psum, n);

	for (int i = 1; i < n-1; i++) {
		int sum_left = psum[i-1];
		int sum_right = psum[n-1] - psum[i];
		if (IsPrime(sum_left) && IsPrime(sum_right))
			std::cout << i << " ";
	}

	delete[] arr;
	delete[] psum;
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