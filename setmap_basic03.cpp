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
	std::set<char> s;
	for (int i = 0; i < n; i++) {
		char c;
		std::cin >> c;
		s.insert(c);
	}
	std::cout << s.size() << endl;
	auto iS = s.begin();
	auto iE = s.rbegin();
	std::cout << *iE << " " << *iS << " ";
	std::cout << *(++iE) << " " << *(++iS) << endl;

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