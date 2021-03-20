// 2021-03-13 03:31-03:37
#include <bits/stdc++.h>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::string winner;
	if (a < b) {
		winner = "Aoki";
	} else if (b < a) {
		winner = "Takahashi";
	} else {
		if (c == 0) {
			winner = "Aoki";
		} else {
			winner = "Takahashi";
		}
	}
	std::cout << winner << std::endl;
	return 0;
}
