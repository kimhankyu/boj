/*
https://www.acmicpc.net/problem/11328
*/

#include <iostream>
#include <string>
#define POS "Possible"
#define IMPOS "Impossible"

int main(void) {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[26] = {0, };
		int arr_2[26] = {0, };
		std::string a;
		std::string b;
		std::cin >> a >> b;
		for (std::string::iterator it = a.begin(); it != a.end(); it++) {
			arr[*it - 'a']++;
		}
		for (std::string::iterator it = b.begin(); it != b.end(); it++) {
			arr_2[*it - 'a']++;
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] != arr_2[j]) {
				std::cout << IMPOS << std::endl;
				goto IM;
			}
		}
		std::cout << POS << std::endl;
IM:		;
	}

	return 0;
}


