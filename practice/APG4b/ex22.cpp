#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	using pii = pair<int, int>;
	using vp = vector<pii>;
	vp v(n);

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pii p(a, b);
		v.at(i) = p;
	}

	auto comp_second = [](pii x, pii y){ return x.second < y.second; };
	sort(v.begin(), v.end(), comp_second);

	for (int k = 0; k < n; k++) {
		cout << v.at(k).first << " " << v.at(k).second << endl;
	}
	return 0;
}
