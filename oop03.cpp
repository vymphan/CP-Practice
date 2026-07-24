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

class SinhVien {
private:
	std::string ma {};
	std::string ten {};
	std::string lop {};
	std::string ngaysinh {};
	double gpa;

public:
	SinhVien(std::string ma, std::string ten, std::string lop, std::string ngaysinh, double gpa) {
		this->ma = ma;
		this->ten = ten;
		this->lop = lop;
		this->ngaysinh = ngaysinh;
		this->gpa = gpa;
		chuanHoa();
	};

	void chuanHoa() {
		if (ngaysinh[1] == '/')
			ngaysinh = "0" + ngaysinh;
		if (ngaysinh[4] == '/')
			ngaysinh.insert(3, "0");
	};

	void hienThi() {
		std::cout << ma << " " << ten << " " << lop << " " << ngaysinh << " "
			<< std::fixed << std::setprecision(1) << gpa;
	};
};

void Solve() {
	std::string ten, lop, ngaysinh;
	double gpa;
	std::getline(std::cin, ten);
	std::cin >> lop >> ngaysinh >> gpa;
	SinhVien sv{"SV001", ten, lop, ngaysinh, gpa};
	sv.hienThi();
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