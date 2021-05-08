#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main() {
  int n;
  cin >> n;
	vi a(n), b(n);
	for(int i = 0; i < n; i++){
		int a_i;
		cin >> a_i;
		a.at(i) = a_i;
	}
	for(int i = 0; i < n; i++){
		int b_i;
		cin >> b_i;
		b.at(i) = b_i;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int d = b.at(0) - a.at(n - 1);
	int ans = (d >= 0) ? d + 1 : 0;

	cout << ans << endl;
	return 0;
}
