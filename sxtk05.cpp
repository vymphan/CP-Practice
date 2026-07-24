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

bool cmp(std::pair<int, int> p1, std::pair<int, int> p2) {
	if (p1.second != p2.second) {
		return p1.second > p2.second;
	}
	return p1.first < p2.first;
}

void Solve() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	std::map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		mp[arr[i]]++;
	}

	std::vector<std::pair<int, int>> v(mp.begin(), mp.end());
	std::sort(v.begin(), v.end(), cmp);
	std::cout << v[0].first << " " << v[0].second << endl;

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