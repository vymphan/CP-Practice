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

struct Student {
	std::string name;
	std::string dob;
	std::string address;
	int toan;
	int ly;
	int hoa;
	int tong;

	void tinhtong() {
		tong = toan + ly + hoa;
	}

	std::string print() {
		return name + " " + dob + " " + address + " " + std::to_string(tong);
	}
};

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::vector<Student> v;
	while (n--) {
		Student student;
		std::getline(std::cin, student.name);
		std::getline(std::cin, student.dob);
		std::getline(std::cin, student.address);
		std::cin >> student.toan >> student.ly >> student.hoa;
		std::cin.ignore();
		student.tinhtong();
		v.push_back(student);
	}
	std::cout << "DANH SACH THU KHOA : " << endl;

	int maxd = -1;
	for (int i = 0; i < (int) v.size(); ++i) {
		if (v[i].tong > maxd) {
			maxd = v[i].tong;
		}
	}
	std::vector<Student> thukhoa;
	for (auto &student : v) {
		if (student.tong == maxd) {
			std::cout << student.print() << endl;
		}
	}

	std::cout << "KET QUA XET TUYEN:" << endl;
	int chuan = 24;
	for (auto &student : v) {
		std::cout << student.print() << " "
			<< (student.tong >= chuan ? "DO\n" : "TRUOT\n");
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