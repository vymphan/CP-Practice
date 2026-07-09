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

const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};

void track(twoDarray &map, twoDarray &visited, int row, int col, int x, int y) {
	visited[x][y] = 1;
	for (int k = 0; k < 4; ++k) {
		int i = x + dx[k];
		int j = y + dy[k];
		if (i >= 0 && i < row && j >= 0 && j < col
			&& map[i][j] == 1 && visited[i][j] == 0) {
			track(map, visited, row, col, i, j);
		}
	}
}


void Solve() {
	int n, m, s, t, u, v;
	std::cin >> n >> m >> s >> t >> u >> v;
	--s; --t; --u; --v;
	twoDarray mymap(n);
	twoDarray visitedmap(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int val;
			std::cin >> val;
			mymap[i].push_back(val);
			visitedmap[i].push_back(0);
		}
	}
	track(mymap, visitedmap, n, m, s, t);


	if (visitedmap[u][v] == 1) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
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