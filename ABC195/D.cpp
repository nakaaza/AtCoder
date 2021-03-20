#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main(){
	int n, m, q;
	cin >> n >> m >> q;
	vector<pii> things(n);
	for (int i = 0; i < n; i++) {
		int w, v;
		cin >> w >> v;
		things.at(i) = make_pair(w, v);
	}
	vector<int> boxes_t(m);
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		boxes_t.at(i) = x;
	}

	vector<pii> queries(q);
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		queries.at(i) = make_pair(l, r);
	}
	// cout << "=======================" << endl;
	sort(things.begin(), things.end(), [](pii a, pii b){return a.second > b.second;});
	// cout << "sorted things: ";
	// for (auto t : things) {
	// 	cout <<"[" << t.first << " " << t.second << "], ";
	// }
	// cout << endl;

	for(auto q : queries){
		auto l = q.first;
		auto r = q.second;
		vector<int> boxes = boxes_t;
		for (int i = l - 1; i < r; i++) {
			boxes.erase(boxes.begin() + l - 1);
		}
		sort(boxes.begin(), boxes.end(), [](int a, int b){return a < b;});
		// cout << "sorted boxes: ";
		// for (auto b : boxes) {
		// 	cout << b << ", ";
		// }
		// cout << endl;

		vector<int> ships(boxes.size(), 0);
		for(auto t : things){
			auto w = t.first;
			auto v = t.second;
			for(size_t i = 0; i < boxes.size(); i++){
				if(w <= boxes.at(i) && ships.at(i) == 0){
					ships.at(i) = v;
					break;
				}
			}
		}

		int sum = 0;
		for(auto s : ships){
			sum += s;
		}
		cout << sum << endl;
	}
	return 0;
}
