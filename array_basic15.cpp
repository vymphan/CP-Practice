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
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int maxx = arr[0];
	int maxx2nd = INT_MIN;
	for (int i = 1; i < n; i++) {
		if (arr[i] >= maxx) {
			maxx2nd = maxx;
			maxx = arr[i];
		} else if (arr[i] > maxx2nd) {
			maxx2nd = arr[i];
		}
	}
	std::cout << maxx << " " << maxx2nd;

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