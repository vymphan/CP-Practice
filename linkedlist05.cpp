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

struct Linkedlist {
	Node* HEAD { nullptr };

	void push_front(Node* new_node) {
		if (HEAD == nullptr) {
			HEAD = new_node;
		} else {
			new_node->next = HEAD;
			HEAD = new_node;
		}
	}

	void sort() {
		Node* curr = HEAD->next;
		while (curr != nullptr){
			int val = curr->data;
			Node* prev = curr-
		}
	}
}


void Solve() {

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