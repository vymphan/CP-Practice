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

void tolower(std::string &word) {
	for (char &c : word) {
		c = std::tolower(c);
	}
}

void Solve() {
	std::string sentence;
	std::getline(std::cin, sentence);
	std::stringstream ss(sentence);
	std::string word;
	std::unordered_set<std::string> se;
	while (ss >> word) {
		tolower(word);
		se.insert(word);
	}
	std::cout << se.size() << endl;
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