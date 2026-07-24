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
using twoDarray = std::vector<std::vector<int>>;

void flood(const twoDarray &board, twoDarray &visited,
	const int n, const int m, const int centerX, const int centerY,
	int &cnt) {
	visited[centerX][centerY] = 1;
	int rows[4] = {-1, 0, 0, 1};
	int cols[4] = {0, -1, 1, 0};

	for (int k = 0; k < 4; ++k) {
		int x = rows[k] + centerX;
		int y = cols[k] + centerY;
		if (x >= 0 && x < n && y >= 0 && y < m) {
			if (board[x][y] == 0) {
				cnt++;
			} else if (board[x][y] == 1 && visited[x][y] == 0) {
				flood(board, visited, n, m, x, y, cnt);
			}
		} else {
			cnt++;
		}
	}
}

void Solve() {
	int n, m;
	std::cin >> n >> m;
	twoDarray board(n, std::vector<int>(m, 0));
	twoDarray visited(n, std::vector<int>(m, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> board[i][j];
		}
	}
	int maxcnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (board[i][j] == 1 && visited[i][j] == 0) {
				int cnt = 0;
				flood(board, visited, n, m, i, j, cnt);
				maxcnt = std::max(cnt, maxcnt);
			}
		}
	}
	std::cout << maxcnt << endl;
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