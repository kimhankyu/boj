/*
https://www.acmicpc.net/problem/10773
*/

#include <iostream>
#include <stack>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k;
	std::cin >> k;
	std::stack<int> s;
	for (int i = 0; i < k; i++) {
		int n;
		std::cin >> n;
		if (n == 0) {
			s.pop();
		} else {
			s.push(n);
		}
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	std::cout << sum;
	return 0;
}
