/*
https://www.acmicpc.net/problem/10845
*/

#include <iostream>
#include <queue>
#include <string>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	std::queue<int> q;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		if (str == "push") {
			int x;
			std::cin >> x;
			q.push(x);
		} else if (str == "pop") {
			if (q.empty()) {
				std::cout << "-1\n";
			} else {
				std::cout << q.front() << '\n';
				q.pop();
			}
		} else if (str == "size") {
			std::cout << q.size() << '\n';
		} else if (str == "empty") {
			std::cout << q.empty() << '\n';
		} else if (str == "front") {
			if (q.empty()) {
				std::cout << "-1\n";
			} else {
				std::cout << q.front() << '\n';
			}
		} else if (str == "back") {
			if (q.empty()) {
				std::cout << "-1\n";
			} else {
				std::cout << q.back() << '\n';
			}
		}
	}
	return 0;
}
