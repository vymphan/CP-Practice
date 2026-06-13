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
	ll n;
	std::cin >> n;

	ll cnt = 0;
	int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int size = 10;
	for (int i = 0; i < size; i++) {
		if (n >= money[i]) {
			cnt += n / money[i];
			n %= money[i];
		}
	}
	std::cout << cnt << endl;
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