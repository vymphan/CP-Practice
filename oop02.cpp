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

class HocSinh {
private:
	std::string ten {};
	std::string ngaysinh {};
	double toan {};
	double ly {};
	double hoa {};

public:
	HocSinh(std::string ten, std::string ngaysinh, double toan, double ly, double hoa) {
		this->ten = ten;
		this->ngaysinh = ngaysinh;
		this->toan = toan;
		this->ly = ly;
		this->hoa = hoa;
	};
	void hienThi() {
		std::cout << ten << " " << ngaysinh << std::fixed << std::setprecision(1) << " " << (toan + ly + hoa) << endl;
	};
};

void Solve() {
	std::string ten, ngaysinh;
	double toan, ly, hoa;
	std::getline(std::cin, ten);
	std::cin >> ngaysinh >> toan >> ly >> hoa;
	HocSinh hocsinh{ten, ngaysinh, toan, ly, hoa};
	hocsinh.hienThi();
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