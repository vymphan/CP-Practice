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

ll gcd(ll a, ll b) {
	if (a == 0 && b == 0)
		return a + b;
	while (b != 0) {
		ll rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

class PhanSo {
private:
	ll tu {};
	ll mau {1};
public:
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	};
	void toiGian() {
		ll res = gcd(tu, mau);
		tu /= res;
		mau /= res;
	};

	void hienThi() {
		std::cout << tu << "/" << mau << endl;
	}

};

void Solve() {
	ll tu, mau;
	std::cin >> tu >> mau;
	PhanSo ps{tu, mau};
	ps.toiGian();
	ps.hienThi();
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