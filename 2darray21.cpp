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

const int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void track(const twoDarray &board, twoDarray &visited, int n, int x, int y) {
	visited[x][y] = 1;
	for (int k = 0; k < 8; ++k) {
		int i = x + dx[k];
		int j = y + dy[k];
		if (i >= 0 && i < n && j >= 0 && j < n
				&& board[i][j] == 1 && visited[i][j] == 0) {
			track(board, visited, n, i, j);
		}
	}
}

void Solve() {
	int n, s, t, u, v;
	std::cin >> n >> s >> t >> u >> v;
	--s; --t; --u; --v;
	twoDarray board(n);
	twoDarray visited(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int val;
			std::cin >> val;
			board[i].push_back(val);
			visited[i].push_back(0);
		}
	}
	track(board, visited, n, s, t);

	if (visited[u][v] == 1) {
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
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