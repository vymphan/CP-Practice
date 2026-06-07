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

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int min_indx = 0;
	int max_indx = 0;

	for (int i = 1; i < n; i++) {
		if (arr[i] <= arr[min_indx])
			min_indx = i;
		if (arr[i] > arr[max_indx])
			max_indx = i;
	}
	std::cout << min_indx << " " << max_indx << endl;

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