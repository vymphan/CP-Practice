#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using ll = long long;
using namespace std;
#define endl '\n'

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

void nhap(vector<int> &v) {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		v.push_back(x);
	}
}

vector<int> prime_list(vector<int> &v){
    //tạo 1 vector mới sau đó duyệt v, tìm số nguyên tố và pushback vào
    //trả về vector mới tạo
    vector<int> primes;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    	if (isPrime(*it))
    		primes.push_back(*it);
    }
    return primes;
}

void in(const vector<int> &v) {
	for (int i = 0; i < (int) v.size(); i++) {
		std::cout << v[i] << " ";
	}
}

int main(){
    vector<int> v;
    nhap(v); // Hàm nhập viết ntn?
    vector<int> res = prime_list(v);
    in(res);
    return 0;
}
