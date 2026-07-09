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

std::string formatdate(const std::string &s) {
	std::string date;
	std::string month;
	std::string year;

	std::stringstream ss(s);
	std::getline(ss, date, '/');
	std::getline(ss, month, '/');
	std::getline(ss, year);

	if (std::stoi(date) < 10 && date.size() < 2)
		date = "0" + date;
	if (std::stoi(month) < 10 && month.size() < 2)
		month = "0" + month;
	return date + '/' + month + '/' + year;
}

void Solve() {
	std::string s;
	std::cin >> s;
	std::cout << formatdate(s) << endl;

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