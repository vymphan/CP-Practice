#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <sstream>

using ll = long long;
#define endl '\n'

int count(std::string s) {
	int cnt = 0;
	for (int i = 0; i < (int) s.size(); ++i) {
		if (s[i] == '@')
			cnt++;
	}
	return cnt;
}

bool checkspecial(std::string s) {
	for (int i = 0; i < (int) s.size(); ++i) {
		if (std::isdigit(s[i]) || std::isalpha(s[i]))
			continue;
		if (s[i] != '@' && s[i] != '.' && s[i] != '_') {
			return false;
		}
	}
	return true;
}

bool checkdomain(std::string s) {
	std::unordered_set<std::string> se = {"gmail.com", "28tech.com.vn", "yahoo.com", "hotmail.com"};
	if (se.find(s) == se.end())
		return false;
	return true;
}

void Solve() {
	int n;
	std::cin >> n;
	std::cin.ignore();
	for (int i = 0; i < n; ++i) {
		std::string email;
		std::getline(std::cin, email);
		bool check1 = count(email) == 1;
		std::stringstream ss(email);
		std::string username;
		std::string domain;
		std::getline(ss, username, '@');
		std::getline(ss, domain);
		bool check2 = checkdomain(domain);
		bool check3 = checkspecial(email);
		std::cout << (check1 && check2 && check3 ? "YES\n" : "NO\n");
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