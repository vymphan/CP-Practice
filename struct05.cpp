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
	void print() {
		std::cout << name << " " << dob << " " << address << " "
			<< std::fixed << std::setprecision(2) << gpa << endl;
	}
};

bool cmp(Student s1, Student s2) {
	return s1.name < s2.name;
}

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::vector<Student> v;
	for (int i = 0; i < n; ++i) {
		Student student;
		std::getline(std::cin, student.name);
		std::getline(std::cin, student.dob);
		std::getline(std::cin, student.address);
		std::cin >> student.gpa;
		std::cin.ignore();
		v.push_back(student);
	}
	std::stable_sort(v.begin(), v.end(), cmp);

	for (auto &student : v) {
		student.print();
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