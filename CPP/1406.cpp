/*
https://www.acmicpc.net/problem/1406
*/

#include <iostream>
#include <string>
#include <list>

int main(void) {
	std::string str;
	std::list<char> l;
	std::getline(std::cin, str);
	for (std::string::iterator it = str.begin(); it != str.end(); it++) {
		l.push_back(*it);
	}

	int n;
	std::cin >> n;
	std::list<char>::iterator it = l.end();
	
	for (int i = 0; i < n; i++) {
		char c;
		std::cin >> c;
		if (c == 'L') {
			if (it != l.begin()) {
				it--;
			}
		} else if (c == 'D') {
			if (it != l.end()) {
				it++;
			}
		} else if (c == 'B') {
			if (it != l.begin()) {
				--it;
				it = l.erase(it);
			}
		} else if (c == 'P') {
			char cc;
			std::cin >> cc;
			l.insert(it, cc);
		}
	}

	for (std::list<char>::iterator it = l.begin(); it != l.end(); it++) {
		std::cout << *it;
	}
	return 0;
}
