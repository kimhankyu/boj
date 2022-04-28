/*
https://www.acmicpc.net/problem/3986
*/

#include <iostream>
#include <string>
#include <stack>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int ret = 0;
	std::cin >> n;
	while (n-- > 0) {
		std::string str;
		std::stack<char> st;
		std::getline(std::cin >> std::ws, str);
		for (int i = 0; i < str.length(); i++) {
			if (st.empty() || st.top() != str[i]) {
				st.push(str[i]);
			} else if (st.top() == str[i]) {
				st.pop();
			}
		}
		if (st.empty()) { ret++; }
	}
	std::cout << ret;
	return 0;
}
