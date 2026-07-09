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

bool isPalindrome(const std::string &word) {
	int left = 0;
	int right = word.size() - 1;
	while (left < right) {
		if (word[left] != word[right])
			return false;
		left++;
		right--;
	}
	return true;
}

void Solve() {
	std::string s;
	std::getline(std::cin , s);
	std::stringstream ss(s);
	std::multiset<std::string> se;
	std::string word;
	while (ss >> word) {
		if (isPalindrome(word))
			se.insert(word);
	}
	for (const auto &word : se) {
		std::cout << word << " ";
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