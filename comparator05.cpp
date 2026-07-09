#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using ll = long long;
using xyz = std::pair<std::pair<int, int>, int>;
#define endl '\n'

bool cmp(xyz a, xyz b) {
	if (a.first.first != b.first.first) {
		return a.first.first < b.first.first;
	}
	if (a.first.second != b.first.second) {
		return a.first.second < b.first.second;
	}
	return a.second < b.second;
}


void Solve() {
	int n;
	std::cin >> n;
 	xyz * arr = new xyz[n];
 	for (int i = 0; i < n; ++i) {
 		std::cin >> arr[i].first.first >> arr[i].first.second >> arr[i].second;
 	}
 	std::sort(arr, arr + n, cmp);

 	for (int i = 0; i < n; ++i) {
 		std::cout << arr[i].first.first << " " << arr[i].first.second << " " << arr[i].second << endl;
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