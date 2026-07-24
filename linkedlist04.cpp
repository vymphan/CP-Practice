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
	Node* next { nullptr };
};

struct Queue {
	//FIFO
	Node* FRONT { nullptr };
	Node* END { nullptr };

	void push(Node* new_node) {
		if (FRONT == nullptr) {
			FRONT = new_node;
			END = new_node;
		} else {
			END->next = new_node;
			END = new_node;
		}
	}

	void pop() {
		if (FRONT != nullptr && FRONT == END) {
			delete FRONT->next;
			FRONT = nullptr;
			END = nullptr;
		} else if (FRONT != nullptr) {
			Node* node_to_delete = FRONT;
			FRONT = FRONT->next;
			delete node_to_delete;
		}
	}

	void front() {
		if (FRONT == nullptr) {
			std::cout << "EMPTY\n";
		} else {
			std::cout << FRONT->data << endl;
		}
	}
};

void Solve() {
	int n;
	std::cin >> n;
	Queue queue {};
	while (n--) {
		std::string opt;
		std::cin >> opt;
		if (opt == "push") {
			Node* new_node = new Node();
			std::cin >> new_node->data;
			queue.push(new_node);
		} else if (opt == "pop") {
			queue.pop();
		} else if (opt == "front") {
			queue.front();
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