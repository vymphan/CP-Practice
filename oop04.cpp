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

class Employee {
private:
	std::string id {};
	std::string name {};
	std::string gender {};
	std::string dateOfBirth {};
	std::string address {};
	std::string taxId {};
	std::string startDate {};
public:
	Employee(std::string id, std::string name, std::string gender,
			std::string dateOfBirth, std::string address,
			std::string taxId, std::string startDate) {
		this->id = id;
		this->name = name;
		this->gender = gender;
		this->dateOfBirth = dateOfBirth;
		this->address = address;
		this->taxId = taxId;
		this->startDate = startDate;
	};
	void hienThi() {
		std::cout << id << " " << name << " " << gender << " ";
		std::cout << dateOfBirth << " " << address << " ";
		std::cout << taxId << " " << startDate << endl;
	}
};

void Solve() {
	std::string name, gender, dob, address, taxid, startdate;
	std::getline(std::cin, name);
	std::cin >> gender >> dob;
	std::cin.ignore();
	std::getline(std::cin, address);
	std::cin >> taxid >> startdate;
	Employee nv{"00001", name, gender, dob, address, taxid, startdate};
	nv.hienThi();
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