/*
https://www.acmicpc.net/problem/10828
*/

#include <iostream>
#include <stack>
#include <string>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	std::stack<int> s;
	for (int i = 0; i < n; i++) {
		std::string str;
		std::cin >> str;
		if (str == "push") {
			int d;
			std::cin >> d;
			s.push(d);
		} else if (str == "pop") {
			if (s.empty())
				std::cout << "-1\n";
			else {
				std::cout << s.top() << '\n';
				s.pop();
			}
		} else if (str == "size") {
			std::cout << s.size() << '\n';
		} else if (str == "empty") {
			std::cout << s.empty() << '\n';
		} else if (str == "top") {
			if (s.empty())
				std::cout << "-1\n";
			else
				std::cout << s.top() << '\n';
		}
	}
	return 0;
}

