/*
https://www.acmicpc.net/problem/1021
*/

#include <iostream>
#include <algorithm>
#include <deque>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	int m;
	std::cin >> n >> m;
	std::deque<int> dq(n);
	for (int i = 0; i < n; i++) { dq[i] = i + 1; }
	int ret = 0;
	for (int i = 0; i < m; i++) {
		int x;
		std::cin >> x;
		std::deque<int>::iterator it = std::find(dq.begin(), dq.end(), x);
		int distance = it - dq.begin();
		if (distance < (n + 1) / 2) {
			for (int j = 0; j < distance; j++) {
				int n = dq.front();
				dq.pop_front();
				dq.push_back(n);
				++ret;
			}
			dq.pop_front();
			--n;
		} else {
			for (int j = distance; j < n; j++) {
				int n = dq.back();
				dq.pop_back();
				dq.push_front(n);
				++ret;
			}
			dq.pop_front();
			--n;
		}
	}
	std::cout << ret;
	return 0;
}

