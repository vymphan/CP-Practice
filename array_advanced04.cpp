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
	int changes = 0;
	bool check = true;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::scanf("%d", &tmp);
		if (tmp - 25 > changes) {
			check = false;
			break;
		}
		changes -= tmp - 25;
		changes += 25;
	}
	if (check)
		std::printf("YES\n");
	else
		std::printf("NO\n");

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