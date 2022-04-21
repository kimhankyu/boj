/*
https://www.acmicpc.net/problem/10866
*/

#include <iostream>
#include <deque>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	std::deque<int> dq;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		if (str == "push_front") {
			int x;
			std::cin >> x;
			dq.push_front(x);
		} else if (str == "push_back") {
			int x;
			std::cin >> x;
			dq.push_back(x);
		} else if (str == "pop_front") {
			if (dq.empty()) { std::cout << "-1\n"; }
			else {
				std::cout << dq.front() << '\n';
				dq.pop_front();
			}
		} else if (str == "pop_back") {
			if (dq.empty()) { std::cout << "-1\n"; }
			else {
				std::cout << dq.back() << '\n';
				dq.pop_back();
			}
		} else if (str == "size") {
			std::cout << dq.size() << '\n';
		} else if (str == "empty") {
			std::cout << dq.empty() << '\n';
		} else if (str == "front") {
			if (dq.empty()) { std::cout << "-1\n"; }
			else {
				std::cout << dq.front() << '\n';
			}
		} else if (str == "back") {
			if (dq.empty()) { std::cout << "-1\n"; }
			else {
				std::cout << dq.back() << '\n';
			}
		}
	}
	return 0;
}

