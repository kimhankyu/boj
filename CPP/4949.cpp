/*
https://www.acmicpc.net/problem/4949
*/

#include <iostream>
#include <string>
#include <stack>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (true) {
		std::string str;
		std::stack<char> st;
		bool er = false;
		std::getline(std::cin, str);
		if (str == ".") { break; }
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '[' || str[i] =='(') {
				st.push(str[i]);
			} else if (str[i] == ']' || str[i] == ')') {
				if (st.empty()) {
					er = true;
					break;
				} else {
					if (str[i] == ']' && st.top() != '[') {
						er = true;
						break;
					} else if (str[i] == ')' && st.top() != '(') {
						er = true;
						break;
					}
					st.pop();
				}
			}
		}
		if (!st.empty()) { er = true; }
		if (er == true) {
			std::cout << "no\n";
		} else {
			std::cout << "yes\n";
		}
	}
	return 0;
}

