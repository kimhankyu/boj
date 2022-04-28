/*
https://www.acmicpc.net/problem/10799
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
	int stick_num = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			stick_num++;
			stack_c.push(str[i]);
		} else if (str[i] == ')') {
			if (str[i - 1] == '(') {
				stick_num--;
				ret += stick_num;
				stack_c.pop();
			} else {
				stick_num--;
				ret++;
				stack_c.pop();
			}
		}
	}
	std::cout << ret;
	return 0;
}

