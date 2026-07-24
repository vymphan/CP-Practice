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

struct Node {
	int data {};
	Node* prev { nullptr };
};

struct Stack {
	Node* TOP { nullptr };

	void push(Node* new_node) {
		if (TOP == nullptr) {
			TOP = new_node;
		} else {
			new_node->prev = TOP;
			TOP = new_node;
		}
	}

	void pop() {
		if (TOP != nullptr) {
			Node* node_to_delete = TOP;
			TOP = TOP->prev;
			delete node_to_delete;
		}
	}

	void show() {
		if (TOP == nullptr) {
			std::cout << "EMPTY\n\n";
		} else {
			Node* curr = TOP;
			while (curr != nullptr) {
				std::cout << curr->data << endl;
				curr = curr->prev;
			}
		}
	}

};

void Solve() {
	int n;
	std::cin >> n;
	Stack stack {};
	while (n--) {
		std::string opt;
		std::cin >> opt;
		if (opt == "pop") {
			stack.pop();
		} else if (opt == "show") {
			stack.show();
		} else if (opt == "push") {
			Node* new_node = new Node();
			std::cin >> new_node->data;
			stack.push(new_node);
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