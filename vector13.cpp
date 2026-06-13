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

void nhap(std::vector<std::vector<int>> &v, int n, int m){
	for (int i = 0; i < n; i++) {
		std::vector<int> temp;
		for (int j = 0; j < m; j++) {
			int x;
			std::cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
}

void xuat(std::vector<std::vector<int>> v, int n, int m){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << v[i][j] << " ";
		}
		std::cout << endl;
	}
}

void lat(std::vector<std::vector<int>> &v, int n, int m){
	for (int i = 0; i < n; i++) {
		int l = 0;
		int r = m - 1;
		while (l < r) {
			int temp = v[i][l];
			v[i][l] = v[i][r];
			v[i][r] = temp;
			l++;
			r--;
		}
	}
}

int main(){
    int n, m; std::cin >> n >> m;
    std::vector<std::vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}