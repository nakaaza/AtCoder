// 2021-03-13 03:47-04:46
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

bool match(std::vector<int> balls, pii cond){
	return balls.at(cond.first - 1) > 0 && balls.at(cond.second - 1) > 0;
}

int matched_count(std::vector<int> balls, std::vector<pii> conds){
	int count = 0;
	for(auto cond : conds){
		// std::cout << match(balls, cond) << '\n';
		if (match(balls, cond)) count++;
	}
	return count;
}

int main() {
	int n, m;
	std::cin >> n >> m;
	std::vector<pii> conds(m);
	for (size_t i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		conds.at(i) = std::make_pair(a, b);
	}
	// std::cout << "===conds===" << '\n';
	// for (auto p : conds) {
	// 	std::cout << p.first << " " << p.second << '\n';
	// }

	int k;
	std::cin >> k;
	std::vector<pii> selection(k);
	for (size_t i = 0; i < k; i++) {
		int c, d;
		std::cin >> c >> d;
		selection.at(i) = std::make_pair(c, d);
	}
	// std::cout << "===selection===" << '\n';
	// for (auto p : selection) {
	// 	std::cout << p.first << " " << p.second << '\n';
	// }

	std::priority_queue<int> counts;
	for (size_t i = 0; i < (1 << k); i++) {
		// if(i >= (1 << k)) break;
		std::bitset<16> b = i;
		// std::cout << '\n';
		// std::cout << b << '\n';
		std::vector<int> balls(n);
		for (size_t j = 0; j < 16; j++) {
			if(j >= k) break;
			// std::cout << j << '\n';
			if(b.test(j)){
				balls.at(selection.at(j).first - 1)++;
			} else {
				balls.at(selection.at(j).second - 1)++;
			}
		}
		// std::cout << "===balls===" << '\n';
		// for (auto i : balls) {
		// 	std::cout << i << ' ';
		// }
		// std::cout << '\n';
		int count = matched_count(balls, conds);
		// std::cout << count << '\n';
		counts.push(count);
	}
	std::cout << counts.top() << std::endl;
	return 0;
}
