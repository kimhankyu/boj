/*
https://www.acmicpc.net/problem/13300
*/

#include <iostream>

int arr[2][6];

int main(void) {
	int N;
	int K;

	std::cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int S;
		int Y;
		std::cin >> S >> Y;
		arr[S][Y - 1]++;
	}
	int ret = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			ret += (arr[i][j] + K - 1) / K;
		}
	}
	std::cout << ret;
	return 0;
}

