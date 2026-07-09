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

int upper_bound(int arr[], int start, int end, int val) {
	if (start > end) {
		return -1;
	}
	int mid = (start + end) / 2;
	if (arr[mid] > val) {
		return std::max(mid, upper_bound(arr, mid + 1, end, val));
	}
	return upper_bound(arr, start, mid - 1, val);
}


void Solve() {
	int n, val;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::cin >> val;
	int pos = upper_bound(arr, 0, n - 1, val);
	std::cout << (pos == -1 ? n : pos);
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