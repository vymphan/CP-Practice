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

std::string array_to_string(char a[], int n) {
	std::string s = "";
	for (int i = 0; i < n; ++i) {
		s += a[i];
	}
	return s;
}

void Solve() {
	int n;
    char a[10001];
    std::cin >> n;
    for(int i = 0; i < n; i++) std::cin >> a[i];
    std::cout << array_to_string(a, n) << endl;
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