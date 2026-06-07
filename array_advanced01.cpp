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

	int maxx = 0;
	int minn = 0;
	int prime = 0;
	ll max_mul = 1;
	ll mul = 1;
	bool isPalindrome = true;
	const int kmod = 1e9 + 7;
	int negNum = 0;

	for (int i = 0; i < n; i++) {
		// 1) Find the max and its first-encountered index
		if (arr[i] > arr[maxx]) {
			maxx = i;
		}
		// 2) Find the min and its last-encountered index
		if (arr[i] <= arr[minn]) {
			minn = i;
		}
		// 3) Find the total mumber of primes
		if (IsPrime(arr[i])) {
			prime++;
		}
		// 4) Find the largest multiplication of two numbers in the array
		for (int j = i + 1; j < n; j++) {
			max_mul = std::max(max_mul, 1LL * arr[i] * arr[j]);
		}

	}
	// 5) Is the array a palindrome?
	for (int i = 0; i < n/2; i++) {
		if (arr[i] != arr[n-i-1]) {
			isPalindrome = false;
			break;
		}
	}
	// 6) Calculate the multiplcation of all numbers in the array modulo 10^9+7
	for (int i = 0; i < n; i++) {
		mul = (mul * std::abs(arr[i])) % kmod;
		if (arr[i] < 0) {
			negNum++;
		}
	}
	if (negNum % 2 != 0) {
		mul *= -1;
	}
	std::cout << arr[maxx] << " " << maxx << endl;
	std::cout << arr[minn] << " " << minn << endl;
	std::cout << prime << endl;
	std::cout << max_mul << endl;
	std::cout << (isPalindrome ? "YES" : "NO") << endl;
	std::cout << mul << endl;

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