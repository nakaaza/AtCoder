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
		pii p(b, a);
		v.at(i) = p;
	}

	sort(v.begin(), v.end());

	for (int k = 0; k < n; k++) {
		cout << v.at(k).second << " " << v.at(k).first << endl;
	}
	return 0;
}
