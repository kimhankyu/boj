/*
https://www.acmicpc.net/problem/1919
*/

#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
	std::string a;
	std::string b;
	
	std::cin >> a >> b;

	int arr[26] = {0, };
	for (std::string::iterator it = a.begin(); it != a.end(); it++) {
		arr[*it - 'a']++;
	}
	for (std::string::iterator it = b.begin(); it != b.end(); it++) {
		arr[*it - 'a']--;
	}
	int ret = 0;
	for (int i = 0; i < 26; i++) {
		ret += std::abs(arr[i]);
	}
	std::cout << ret;
	return 0;
}
