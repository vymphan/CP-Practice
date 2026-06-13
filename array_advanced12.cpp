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

bool IsPrime(int n) {
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

void Solve() {
	int* arr = new int[10'000];
	int n = 0;
	while (std::cin >> arr[n]) {
		n++;
	}

	for (int i = 0; i <= n; i++) {
		if (IsPrime(arr[i])) {
			bool check = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j]) {
					check = false;
					break;
				}
			}

			if (!check) {
				continue;
			}
			int cnt = 1;
			for (int j = i + 1; j <= n; j++) {
				if (arr[i] == arr[j]) {
					cnt++;
				}
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