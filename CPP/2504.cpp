/*
https://www.acmicpc.net/problem/2504
*/
/*
문제 풀이
기존에 생각했던 계산한 값을 스택에 넣어줘서 계속 계산하는 방식은 계산한 숫자가 40이나 다른 괄호들과
아스키코드가 같은 경우에 문제가 생기는 것을 확인했습니다.
그러므로 각 항들마다 곱해진 값들을 계산하여 따로따로 연산하는 방식을 택했습니다.
알고리즘 자체는 10799번과 유사합니다.
여는 괄호쌍일때는 추가
닫는 괄호쌍일때는 
1) 직전에 여는 괄호쌍이면 누적해서 sum
2) 아닐 경우에는 pop
*/
#include <iostream>
#include <string>
#include <stack>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string str;
	std::cin >> str;
	std::stack<char> stack_c;
	int ret = 0;
	int num = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			num *= 2;
			stack_c.push(str[i]);
		} else if (str[i] == '[') {
			num *= 3;
			stack_c.push(str[i]);
		} else if (str[i] == ')') {
			if (stack_c.empty() || stack_c.top() != '(') {
				std::cout << "0";
				return 0;
			}
			if (str[i - 1] == '(') {
				ret += num;
			}
			num /= 2;
			stack_c.pop();
		} else if (str[i] == ']') {
			if (stack_c.empty() || stack_c.top() != '[') {
				std::cout << "0";
				return 0;
			}
			if (str[i - 1] == '[') {
				ret += num;
			}
			num /= 3;
			stack_c.pop();
		}
	}
	if (stack_c.empty()) {
		std::cout << ret;
	} else {
		std::cout << "0";
	}
	return 0;
}

