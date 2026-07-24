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
	double gpa;
};

bool isBornInApril(Student s) {
	if ((s.dob[1] == '/' && s.dob[2] == '4') || (s.dob[2] == '/' && s.dob[3] == '4'))
		return true;
	return false;
}

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::vector<Student> v;
	for (int i = 0; i < n; ++i) {
		Student s;
		std::getline(std::cin, s.name);
		std::getline(std::cin, s.dob);
		std::getline(std::cin, s.address);
		std::cin >> s.gpa;
		std::cin.ignore();
		v.push_back(s);
	}

	for (const auto &s : v) {
		if (isBornInApril(s)) {
			std::cout << s.name << " " << s.dob << " " << s.address << " "
				<< std::fixed << std::setprecision(2) << s.gpa << endl;
		}
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