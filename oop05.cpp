#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>

using ll = long long;
#define endl '\n'

class Employee {
private:
	std::string id {};
	std::string name {};
	std::string gender {};
	std::string dob {};
	std::string address {};
	std::string taxid {};
	std::string startdate {};

public:
	Employee(std::string id, std::string name, std::string gender,
		std::string dob, std::string address, std::string taxid,
		std::string startdate) {
		this->id = id;
		this->name = normalizeName(name);
		this->gender = gender;
		this->dob = normalizeDate(dob);
		this->address = address;
		this->taxid = taxid;
		this->startdate = normalizeDate(startdate);
	};

	std::string normalizeName(std::string name) {
		std::stringstream ss{name};
		std::string res {};
		std::string word {};
		while (ss >> word) {
			res += std::toupper(word[0]);
			for (int i = 1; i < (int) word.size(); ++i) {
				res += std::tolower(word[i]);
			}
			res += " ";
		}
		res.pop_back();
		return res;
	};

	std::string normalizeDate(std::string date) {
		if (date[1] == '/')
			date = "0" + date;
		if (date[4] == '/')
			date.insert(3, "0");
		return date;
	};

	void print() {
		std::cout << id << " " << name << " " << gender << " " << dob << " ";
		std::cout << address << " " << taxid << " " << startdate << endl;
	};
};

void Solve() {
	std::string name, gender, dob, address, taxid, startdate;
	std::getline(std::cin, name);
	std::getline(std::cin, gender);
	std::getline(std::cin, dob);
	std::getline(std::cin, address);
	std::getline(std::cin, taxid);
	std::getline(std::cin, startdate);
	Employee e{"00001", name, gender, dob, address, taxid, startdate};
	e.print();
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