// 2021-03-13 03:15-
#include <bits/stdc++.h>

int main() {
	int h, w;
	std::cin >> h >> w;
	std::vector<std::vector<int> > v(h, std::vector<int> v(w));
	for (size_t i = 0; i < h; i++) {
		for (size_t j = 0; j < w; j++) {
			char tile;
			if (tile == '#') {
				v.at(i).at(j) == 1;
			} else {
				v.at(i).at(j) == 0;
			}
		}
	}
	return 0;
}
