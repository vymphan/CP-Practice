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

bool IsPerfectSquare(int n) {
	int sqrt = std::sqrt(n);
	return sqrt*sqrt == n;
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int primeCnt = 0;
	int palindromeCnt = 0;
	int perfectSquareCnt = 0;
	int primeSumDigitsCnt = 0;

	for (int i = 0; i < n; i++) {
		if (IsPrime(arr[i]))
			primeCnt++;
		if (IsPerfectSquare(arr[i]))
			perfectSquareCnt++;
		int rev = 0;
		int cpy = arr[i];
		int sum = 0;
		while (cpy != 0) {
			sum += cpy % 10;
			rev = rev * 10 + cpy % 10;
			cpy /= 10;
		}
		if (rev == arr[i])
			palindromeCnt++;
		if (IsPrime(sum))
			primeSumDigitsCnt++;

	}
	std::cout << primeCnt << endl
			<< palindromeCnt << endl
			<< perfectSquareCnt << endl
			<< primeSumDigitsCnt << endl;

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