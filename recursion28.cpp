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

int findFirst(int arr[], int start, int end, int val) {
	if (start > end)
		return INT_MAX;
	int mid = (start + end) / 2;
	if (arr[mid] == val)
		return std::min(findFirst(arr, start, mid - 1, val), mid);
	if (arr[mid] > val)
		return findFirst(arr, start, mid - 1, val);
	return findFirst(arr, mid + 1, end, val);
}

int findLast(int arr[], int start, int end, int val) {
	if (start > end)
		return -1;
	int mid = (start + end) / 2;
	if (arr[mid] == val)
		return std::max(findLast(arr, mid + 1, end, val), mid);
	if (arr[mid] < val)
		return findLast(arr, mid + 1, end, val);
	return findLast(arr, start, mid - 1, val);
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	int x;
	std::cin >> x;
	int firstpos = findFirst(arr, 0, n - 1, x);
	if (firstpos > n) {
		std::cout << 0 << endl;
	} else {
		int lastpos = findLast(arr, 0, n - 1, x);
		std::cout << lastpos - firstpos + 1 << endl;
	}
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