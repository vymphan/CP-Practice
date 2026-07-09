#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>

using ll = long long;
#define endl '\n'

void Solve() {
	std::string s;
	std::cin >> s;
	std::unordered_set<char> se = {'2', '8', 't', 'e', 'c', 'h'};
	for (auto it = se.begin(); it != se.end(); ++it) {
		auto found_index = s.find(*it);
		while (found_index != std::string::npos) {
			s.erase(found_index, 1);
			found_index = s.find(*it);
		}
	}

	if (s.size() == 0)
		std::cout << "EMPTY\n";
	else
		std::cout << s << endl;
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