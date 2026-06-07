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

bool* primes;

void CreatePrimeSieve(int n) {
	primes
	primes[0] = primes[1] = 0;
	for (int i = 2; i <= n; i++) {
		primes[i] = 1;
	}
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (primes[i]) {
			for (int j = i*i; j <= n; j += i) {
				primes[j] = 0;
			}
		}
	}
}

void Solve() {
	int n;
	std::cin >> n;



	for (int i = 1; i <= n; i++) {
		if ()
	}



	delete[] primes;
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