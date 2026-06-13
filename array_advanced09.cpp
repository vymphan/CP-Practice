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

int nums[10'000'001];

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	int maxn = arr[0];
	for (int i = 0; i < n; i++) {
		nums[arr[i]]++;
		maxn = std::max(maxn, arr[i]);
	}

	for (int i = 0; i <= maxn; i++) {
		if (nums[i] != 0) {
			std::cout << i << " " << nums[i] << endl;
		}
	}
	std::cout << endl;

	for (int i = 0; i < n; i++) {
		if (nums[arr[i]] != 0) {
			std::cout << arr[i] << " " << nums[arr[i]] << endl;
			nums[arr[i]] = 0;
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