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
	int n, m;
	std::cin >> n >> m;
	char * arrA = new char[n];
	std::map<char, int> mapB;
	for (int i = 0; i < n; i++) {
		std::cin >> arrA[i];
	}
	for (int i = 0; i < m; i++) {
		char x;
		std::cin >> x;
		mapB[x]++;
	}
	for (int i = 0; i < n; i++) {
		if (mapB[arrA[i]]) {
			std::cout << arrA[i] << " ";
			mapB[arrA[i]] = 0;
		}
	}

	delete[] arrA;
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