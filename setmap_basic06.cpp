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
	std::set<std::string> s;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		s.insert(str);
	}
	std::cout << s.size() << endl;
	for (const std::string &str : s) {
		std::cout << str << " ";
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