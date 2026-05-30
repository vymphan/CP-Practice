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

const int kMax = 1'000'000;
int primes[kMax+1];

void CreatePrimeSieve() {
	primes[0] = primes[1] = 0;
	for (int i = 2; i <= kMax; i++) {
		primes[i] = 1;
	}
	for (int i = 2; i <= std::sqrt(kMax); i++) {
		if (primes[i]) {
			for (int j = i*i; j <= kMax; j += i) {
				primes[j] = 0;
			}
		}
	}
}

void Solve() {
	int t;
	std::cin >> t;

	CreatePrimeSieve();

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		for (int j = 2; j <= n / 2; j++) {
			if (primes[j] && primes[n-j]) {
				std::cout << j << " " << n-j << endl;
			}
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