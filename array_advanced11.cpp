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

int _union[10'000'001];
int _inter[10'000'001];

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

	int ptrA = 0;
	int ptrB = 0;
	while (ptrA < n && ptrB < m) {
		if (arr[ptrA] == brr[ptrB]) {
			std::cout << arr[ptrA] << " ";
			ptrA++;
			ptrB++;
		} else if (arr[ptrA] > brr[ptrB]) {
			std::cout << brr[ptrB] << " ";
			ptrB++;
		} else {
			std::cout << arr[ptrA] << " ";
			ptrA++;
		}
	}
	while (ptrA < n) {
		std::cout << arr[ptrA] << " ";
		ptrA++;
	}
	while (ptrB < m) {
		std::cout << brr[ptrB] << " ";
		ptrB++;
	}
	std::cout << endl;

	ptrA = 0;
	ptrB = 0;
	while (ptrA < n && ptrB < m) {
		if (arr[ptrA] == brr[ptrB]) {
			std::cout << arr[ptrA] << " ";
			ptrA++;
			ptrB++;
		} else if (arr[ptrA] > brr[ptrB]) {
			ptrB++;
		} else {
			ptrA++;
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