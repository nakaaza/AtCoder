#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		if(m.count(val)) m[val]++;
		else m[val] = 1;
	}

	priority_queue<pair<int, int> > pq;
	for (auto p : m) {
		auto k = p.first;
		auto count= p.second;
		pq.push(make_pair(count, k));
	}

	auto max_val = pq.top().second;
	auto max_count = pq.top().first;

	cout << max_val << " " << max_count << endl;
	return 0;
}
