/*
https://www.acmicpc.net/problem/2164
*/

#include <iostream>
#include <queue>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;
	std::queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	std::cout << q.front();

	return 0;
}
