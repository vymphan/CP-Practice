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

void nhap(vector<int> &v) {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		v.push_back(x);
	}
}

void rev(vector<int> &v){
	int n = v.size();
	int l = 0;
	int r = n - 1;
	while (l < r) {
		int temp = v[l];
		v[l] = v[r];
		v[r] = temp;
		l++;
		r--;
	}
}

void in(vector<int> &v) {
	for (const int x : v) {
		std::cout << x << " ";
	}
}

int main(){
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
}