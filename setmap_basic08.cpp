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
	std::map<int, int> mp;
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		mp[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {
		if (mp[arr[i]]) {
			std::cout << arr[i] << " " << mp[arr[i]] << endl;
			mp[arr[i]] = 0;
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