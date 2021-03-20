// 2021-03-13 03:07-03:14
#include <bits/stdc++.h>

int main() {
	int n, x;
	std::cin >> n >> x;
	std::vector<int> v;
	for (size_t i = 0; i < n; i++) {
		int val;
		std::cin >> val;
		if (val == x) {
			continue;
		}
		// v.push_back(val);
		std::cout << val << " ";
	}
	// for (size_t i = 0; i < v.size(); i++) {
	// 	std::cout << v.at(i) << " ";
	// }
	std::cout << std::endl;
	return 0;
}
