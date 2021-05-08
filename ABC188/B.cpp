#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
  vi a, b;
	int n;
  cin >> n;
	for(int i = 0; i < n; i++){
		int ai;
		cin >> ai;
		a.push_back(ai);
	}
	for(int i = 0; i < n; i++){
		int bi;
		cin >> bi;
		b.push_back(bi);
	}

	int p = 0;
	for(int i = 0; i < n; i++){
	 p += a.at(i) * b.at(i);
	}
	string ans = (p == 0) ? "Yes" : "No";
	cout << ans << endl;
	return 0;
}
