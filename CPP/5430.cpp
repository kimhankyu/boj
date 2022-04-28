/*
https://www.acmicpc.net/problem/5430
*/

#include <iostream>
#include <string>
#include <deque>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string str;
		std::deque<int> dq;
		std::getline(std::cin >> std::ws, str);
		int n;
		std::cin >> n;
		std::string ss;
		std::getline(std::cin >> std::ws, ss);
		std::string dd;
		for (int j = 1; j < ss.size(); j++) {
			if (ss[j] == ',' || ss[j] == ']') {
				if (dd.length() == 0) { break; }
				dq.push_back(std::stoi(dd));
				dd.clear();
			} else {
				dd += ss[j];
			}
		}
		int r = 0;
		int e = 0;
		for (std::string::iterator it = str.begin(); it != str.end(); it++) {
			if (*it == 'R') {
				r += 1;
			} else if (*it == 'D') {
				if (dq.size() == 0) {
					std::cout << "error\n";
					e = 1;
					break;
				}
				if (r % 2 == 0) {
					dq.pop_front();
				} else {
					dq.pop_back();
				}
			}
		}
		if (e == 1) { continue; }
		std::cout << "[";
		if (r % 2 == 0) {
			while (dq.size()) {
				std::cout << dq.front();
				dq.pop_front();
				if (dq.size()) {
					std::cout << ',';
				}
			}
		} else {
			while (dq.size()) {
				std::cout << dq.back();
				dq.pop_back();
				if (dq.size()) {
					std::cout << ',';
				}
			}
		}
		std::cout << "]\n";
	}
	return 0;
}

