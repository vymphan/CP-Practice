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

	for (int i = 0; i < n; i++) {
		// check if first-time appearance
		bool check = true;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				check = false;
				break;
			}
		}

		// if first-time, then print and count
		if (check) {
			int cnt = 1;
			for (int j = i + 1; j < n; j++) {
				if (arr[i] == arr[j])
					cnt++;
			}
			std::cout << arr[i] << " " << cnt << endl;
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