// 2021-03-01 02:47-03:00
#include <bits/stdc++.h>

int main() {
	double v, t, s, d;
	std::cin >> v >> t >> s >> d;
	double time = d / v;
	if (time < t || s < time) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
	return 0;
}
