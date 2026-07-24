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
using twoDvector = std::vector<std::vector<char>>;

void flood(const twoDvector &board, twoDvector &visited,
		const int n, const int m, const int centerX, const int centerY,
		int &cnt) {
	visited[centerX][centerY] = '1';
	cnt++;
	int rows[4] = {-1, 0, 0, 1};
	int cols[4] = {0, -1, 1, 0};

	for (int k = 0; k < 4; ++k) {
		int x = rows[k] + centerX;
		int y = cols[k] + centerY;
		if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == '*'
			&& visited[x][y] == '0') {
			flood(board, visited, n , m, x, y, cnt);
		}
	}
}

void Solve() {
	int n, m;
	std::cin >> n >> m;
	std::multiset<int> se;
	twoDvector board(n, std::vector<char>(m, '0'));
	twoDvector visited(n, std::vector<char>(m, '0'));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (board[i][j] == '*' && visited[i][j] == '0') {
				int cnt = 0;
				flood(board, visited, n, m, i, j, cnt);
				se.insert(cnt);
			}
		}
	}

	for (const auto &val : se) {
		std::cout << val << " ";
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