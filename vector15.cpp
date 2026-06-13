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

std::vector<int> nhap() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	return v;
}

void in(const std::vector<int> &v) {
	for (const int x : v) {
		std::cout << x << " ";
	}
}

std::vector<int> unique_vector(std::vector<int> v) {
	std::vector<int>::iterator l = v.begin();
	std::vector<int>::iterator r = v.begin() + 1;
	while (r != v.end()) {
		if (*l == *r) {
			v.erase(r);
		} else {
			l = r;
			r++;
		}
	}
	return v;
}


void Solve() {
	std::vector<int> v = nhap();
	std::vector<int> res = unique_vector(v);
	in(res);
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