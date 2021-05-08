#include <bits/stdc++.h>
using namespace std;
using vll = vector<long long>;
using std::inner_product;

int main() {
  int n;
  cin >> n;
	vll a(n + 1);
	a.at(0) = 0;
	for (int i = 1; i <= n; i++) {
		long long ai;
		cin >> ai;
		a.at(i) = ai;
	}
	sort(a.begin(), a.end());
	long long ans = 1;
	for (size_t i = 0; i < a.size() - 1; i++) {
		ans *= a.at(i + 1) - a.at(i) + 1;
		ans %= 1000000007;
	}
	cout << ans % 1000000007 << endl;
	return 0;
}
