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
	std::cin >> s;
	std::map<char, int> mp;
	for (const char &c : s) {
		mp[c]++;
	}
	int maxn = -1;
	char maxc = 1;
	int minn = 200000;
	char minc = 1;
	for (const auto &[c, freq] : mp) {
		if (freq > maxn) {
			maxn = freq;
			maxc = c;
		} else if (freq == maxn && c > maxc) {
			maxc = c;
		}
		if (freq < minn) {
			minn = freq;
			minc = c;
		} else if (freq == minn && c > minc) {
			minc = c;
		}
	}

	std::cout << maxc << " " << maxn << endl;
	std::cout << minc << " " << minn << endl;

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