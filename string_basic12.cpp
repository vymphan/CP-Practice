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
	std::string s;
	int total = 0;
	while (std::cin >> s) {
		bool check = true;
		for (const char &c : s) {
			if (std::islower(c)) {
				check = false;
				break;
			}
		}
		total += (check ? 1 : 0);
	}

	std::cout << total << endl;

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