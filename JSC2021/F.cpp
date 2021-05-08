#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

long long calc_val(vi a, vi b){
	long long res = 0;
	for(auto ai: a){
		for(auto bi: b){
			cout << max(ai, bi) << endl;
			res += max(ai, bi);
		}
	}
	return res;
}

int main() {
	int n, m, q;
	cin >> n >> m >> q;
	vi a(n, 0);
	vi b(m, 0);
	for (int i = 0; i < q; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		if(t == 1){
			a.at(x - 1) = y;
		} else {
			b.at(x - 1) = y;
		}
		long long val = calc_val(a, b);
		cout << val << endl;
	}
	return 0;
}
