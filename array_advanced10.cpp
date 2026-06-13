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

int numsA[10'000'001];
int numsB[10'000'001];

void Solve() {
	int n, m;
	std::cin >> n >> m;
	int* arr = new int[n];
	int* brr = new int[m];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < m; i++) {
		std::cin >> brr[i];
	}

	// union
	int maxA = arr[0];
	for (int i = 0; i < n; i++) {
		numsA[arr[i]]++;
		maxA = std::max(maxA, arr[i]);
	}
	int maxB = brr[0];
	for (int i = 0; i < m; i++) {
		numsB[brr[i]]++;
		maxB = std::max(maxB, brr[i]);
	}

	for (int i = 0; i <= std::min(maxA, maxB); i++) {
		if (numsA[i] && numsB[i]) {
			std::cout << i << " ";
		}
	}
	std::cout << endl;

	for (int i = 0; i <= std::max(maxA, maxB); i++) {
		if (numsA[i] || numsB[i]) {
			std::cout << i << " ";
		}
	}

	delete[] arr;
	delete[] brr;
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