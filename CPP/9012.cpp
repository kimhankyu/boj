/*
https://www.acmicpc.net/problem/9012
*/

#include <iostream>
#include <string>
#include <stack>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t-- > 0) {
		std::string str;
		std::stack<char> st;
		std::getline(std::cin >> std::ws, str);
		bool err = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				st.push(str[i]);
			} else if (str[i] == ')') {
				if (st.empty() || st.top() != '(') {
					err = true;
					break;
				}
				st.pop();
			}
		}
		if (!st.empty()) {
			err = true;
		}
		if (err == true) {
			std::cout << "NO\n";
		} else {
			std::cout << "YES\n";
		}
	}
	return 0;
}

