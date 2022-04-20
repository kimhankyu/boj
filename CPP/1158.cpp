/*
https://www.acmicpc.net/problem/1158
*/
#include <iostream>
#include <list>

int main(void) {
	int n;
	int k;
	std::cin >> n >> k;
	std::list<int> l;
	for (int i = 0; i < n; i++) {
		l.push_back(i + 1);
	}
	std::list<int>::iterator it = l.begin();
	std::cout << "<";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k - 1; j++) {
			++it;
			if (it == l.end())
				it = l.begin();
		}
		std::cout << *it;
		if (i < n - 1)
			std::cout << ", ";
		it = l.erase(it);
		if (it == l.end())
			it = l.begin();
	}
	std::cout << ">";
	return 0;
}
