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

double getDistance(std::pair<int, int> xy) {
	return std::sqrt(xy.first * xy.first + xy.second * xy.second);
}

bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
	if (getDistance(a) != getDistance(b)) {
		return getDistance(a) < getDistance(b);
	}
	if (a.first != b.first) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

void Solve() {
	int n;
	std::cin >> n;
	std::pair<int, int> * arr = new std::pair<int, int>[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i].first >> arr[i].second;
	}

	std::sort(arr, arr + n, cmp);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i].first << " " << arr[i].second << endl;
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