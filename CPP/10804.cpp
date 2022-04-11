/*
https://www.acmicpc.net/problem/10804
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<int> v(20);
	for (int i = 0; i < 20; i++) {
		v[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		int a;
		int b;
		std::cin >> a >> b;
		std::reverse(v.begin() + a - 1, v.begin() + b);
	}
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " ";
	}
	return 0;
}


