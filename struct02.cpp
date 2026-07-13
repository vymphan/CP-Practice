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

struct Inumber {
	int real;
	int i;
	Inumber() {
		real = 0;
		i = 0;
	}
	Inumber(int _real, int _i) {
		real = _real;
		i = _i;
	}

	Inumber operator+ (Inumber n) {
		return Inumber(real + n.real, i + n.i);
	}

	Inumber operator- (Inumber n) {
		return Inumber(real - n.real, i - n.i);
	}

	Inumber operator* (Inumber n) {
		int ac = real * n.real;
		int adi = real * n.i;
		int bci = i * n.real;
		int bdi2 = (-1) * (i * n.i);
		return Inumber(ac + bdi2, adi + bci);
	}

	std::string to_string() {
		return std::to_string(real) + " " + std::to_string(i);
	}
};

void Solve() {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	Inumber n1 = Inumber(a, b);
	Inumber n2 = Inumber(c, d);
	std::cout << (n1 + n2).to_string() << endl;
	std::cout << (n1 - n2).to_string() << endl;
	std::cout << (n1 * n2).to_string() << endl;
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