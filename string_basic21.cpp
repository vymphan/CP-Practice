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

char convert(int n) {
	switch (n) {
	case 0:
		return '0';
		break;
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	default:
		return 'e';
	}
	return 'e';
}

std::string my_to_string(ll n) {
	if (n == 0)
		return "0";
	std::string s;
	bool isNeg = false;
	if (n < 0) {
		n *= -1;
		isNeg = true;
	}
	while (n != 0) {
		s.push_back(convert(n % 10));
		n /= 10;
	}
	if (isNeg)
		s.push_back('-');

	int left = 0;
	int right = s.size() - 1;
	while (left < right) {
		std::swap(s[left], s[right]);
		left++;
		right--;
	}
	return s;
}

void Solve() {
	ll n;
	std::cin >> n;
	std::cout << my_to_string(n) << endl;
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