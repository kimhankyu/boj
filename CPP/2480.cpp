/*
문제
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다. 

같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.  
예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다. 또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다. 3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

입력
첫째 줄에 3개의 눈이 빈칸을 사이에 두고 각각 주어진다. 

출력
첫째 줄에 게임의 상금을 출력 한다.
*/

#include <iostream>

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int arr[6] = {0,};
	int a;
	int flag = 0;
	int ret;

	for (int i = 0; i < 3; i++) {
		std::cin >> a;
		arr[a - 1]++;
		if (arr[a - 1] == 2) {
			flag = 1;
		} else if (arr[a - 1] == 3) {
			flag = 2;
		}
	}
	if (flag == 0) {
		int num;
		for (int i = 0; i < 6; i++) {
			if (arr[i] == 1) {
				num = i + 1;
			}
		}
		ret = num * 100;
	} else if (flag == 1) {
		for (int i = 0; i < 6; i++) {
			if (arr[i] == 2) {
				ret = 1000 + (i + 1) * 100;
				break;
			}
		}
	} else if (flag == 2) {
		for (int i = 0; i < 6; i++) {
			if (arr[i] == 3) {
				ret = 10000 + (i + 1) * 1000;
				break;
			}
		}
	}
	std::cout << ret;
	return (0);
}