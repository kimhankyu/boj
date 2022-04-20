/*
https://www.acmicpc.net/problem/5397
*/

#include <iostream>
#include <string>
#include <list>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++) {
		std::string str;
		// getline(std::cin >> std::ws, str);
		std::cin >> str;
		std::list<char> l;
		std::list<char>::iterator it = l.begin();
		for (std::string::iterator sit = str.begin(); sit != str.end(); sit++) {
			if (*sit == '<') {
				if (it != l.begin()) {
					--it;
				}
			} else if (*sit == '>') {
				if (it != l.end()) {
					++it;
				}
			} else if (*sit == '-') {
				if (it != l.begin()) {
					--it;
					it = l.erase(it);
				}
			} else {
				l.insert(it, *sit);
			}
		}
		for (std::list<char>::iterator cit = l.begin(); cit != l.end(); cit++) {
			std::cout << *cit;
		}
		std::cout << '\n';
	}
	return 0;
}
