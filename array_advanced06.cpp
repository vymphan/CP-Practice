#include <iostream>
#include <cmath>
#include <climits>
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
	std::scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		int max_left = INT_MIN;
		int max_right = INT_MIN;
		int min_left = INT_MAX;
		int min_right = INT_MAX;
		// Check left
		if (i != 0) {
			// check shortest distance between the left closest city
			min_left = std::abs(arr[i] - arr[i-1]);
			// check longest distance between the left farthest city
			max_left = std::abs(arr[i] - arr[0]);
		}

		// Check right
		if (i != n-1) {
			// check shortest distance between the right closest city
			min_right = std::abs(arr[i] - arr[i+1]);
			// check longest distance between the right farthest city
			max_right = std::abs(arr[i] - arr[n-1]);
		}

		std::printf("%d %d\n",
			std::min(min_left, min_right), std::max(max_left, max_right));

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