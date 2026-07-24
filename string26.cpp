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

bool cmp(std::string s1, std::string s2) {
	if (s1.size() != s2.size())
		return s1.size() > s2.size();
	return s1 > s2;
}


void Solve() {
	std::string s;
	std::cin >> s;
	std::vector<std::string> v;
	int left = 0;
	for (int i = 1; i < (int) s.size(); ++i) {
		if (s[i] != s[i-1]) {
			v.push_back(s.substr(left, i - left));
			left = i;
		}
		if (i == (int) s.size() - 1) {
			if (i == left) {
				v.push_back(s.substr(i, 1));
			} else {
				v.push_back(s.substr(left, i - left + 1));
			}
		}
	}
	std::sort(v.begin(), v.end(), cmp);
	std::cout << v[0] << endl;

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