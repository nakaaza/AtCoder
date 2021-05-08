#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main() {
  int n;
  cin >> n;
	vector<pii> v;
	for (int i = 0; i < n; i++) {
		int x, c;
		cin >> x >> c;
		pii p(x, c);
		v.push_back(p);
	}
	sort(v.begin(), v.end(), [](pii a, pii b){return a.second < b.second;});
	for(auto k: v){
		cout << k.first << " " << k.second << endl;
	}
	long long sec = abs(v.at(0).first) + abs(v.at(v.size() - 1).first);
	for (size_t i = 1; i < v.size(); i++) {
		sec += abs(v.at(i).first - v.at(i - 1).first);
	}
	cout << sec << endl;
	return 0;
}
