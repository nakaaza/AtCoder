// 2021-03-13 03:38-03:46
#include <bits/stdc++.h>

bool beat_beast(std::pair<int, int> p, int s, int d){
	if (p.first < s && d < p.second) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n, s, d;
	std::cin >> n >> s >> d;
	std::vector<std::pair<int, int> > v(n);
	for (size_t i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		v.at(i) = std::make_pair(x, y);
	}

	for (auto p : v) {
		if(beat_beast(p, s, d)){
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;
	return 0;
}
