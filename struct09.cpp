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

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::map<std::string, int> mp;
	int maxs = 0;
	for (int i = 0; i < n; i++) {
		Student s;
		std::getline(std::cin, s.name);
		std::getline(std::cin, s.dob);
		std::getline(std::cin, s.address);
		std::cin >> s.gpa;
		std::cin.ignore();
		mp[s.address]++;

		if (mp[s.address] > maxs) {
			maxs = mp[s.address];
		}
	}

	for (auto &[city, freq] : mp) {
		if (freq == maxs)
			std::cout << city << endl;
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