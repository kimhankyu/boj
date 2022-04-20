/*
https://www.acmicpc.net/problem/10807
*/

#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	int arr[201] = {0, };

	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		arr[a + 100]++;
	}
	int v;
	std::cin >> v;
	std::cout << arr[v + 100];
	return 0;
}

