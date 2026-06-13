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
	std::scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::scanf("%d", &arr[i]);
	}

	// sort even
	for (int i = 0; i < n-1; i++) {
		// if even number
		if (arr[i] % 2 == 0) {
			for (int j = i; j < n-1; j++) {
				if (arr[j+1] % 2 != 0 || arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	// sort odd


	for (int i = 0; i < n; i++) {
		std::printf("%d ", arr[i]);
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