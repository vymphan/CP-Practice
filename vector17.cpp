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

std::vector<char> convert_number(ll n) {
	std::vector<char> res(64, '0');
	for (int i = 63; i >= 0; i--) {
		if (n % 2 != 0)
			res[i] = '1';
		n /= 2;
	}
	return res;
}

void Solve() {
	int t; std::cin >> t;
	while(t--) {
		ll n;
		std::cin >> n;
		std::vector<char> bin = convert_number(n);
		for (char x : bin) {
			std::cout << x;
		}
		std::cout << endl;
	}
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