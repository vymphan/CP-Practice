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


	int left = 0;
	while (left < n) {
		if (v[left].gpa < 1.0) {
			break;
		}
		left++;
	}
	int right = left + 1;
	while (left < n && right < n) {
		if (v[right].gpa >= 1.0) {
			//swap
			std::swap(v[left], v[right]);
			left++;
			right++;
		} else {
			right++;
		}
	}
	v.erase(v.begin() + left, v.end());
	for (auto &s : v) {
		s.print();
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
