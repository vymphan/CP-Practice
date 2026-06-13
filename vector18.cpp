#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <algorithm>

using ll = long long;
#define endl '\n'

std::vector<char> convert_number(ll n) {
	char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						'a', 'b', 'c', 'd', 'e', 'f'
					};
	std::vector<char> res;
	while (n > 0) {
		res.push_back(arr[n % 16]);
		n /= 16;
	}
	std::reverse(res.begin(), res.end());

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