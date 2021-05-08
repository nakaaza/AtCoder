#include <bits/stdc++.h>
using namespace std;
using vll = vector<long long>;
using std::inner_product;

int main() {
  int n;
  cin >> n;
	vll as;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		as.push_back(a);
		sum += a * a % 998244353;
	}
	sort(as.begin(), as.end());
	// cout << sum << endl;
	for (int j = 0; j < n - 1; j++) {
		long long a_j = as.at(j);
		vll coef;
		for (int i = 0; i < n - j + 1; i++) coef.push_back((long long)(1 << i));
		sum += a_j * inner_product(next(as.begin(), j + 1), as.end(), coef.begin(), 0) % 998244353;
		// for (int k = 0; k < i; k++) {
		// 	long long a_k = as.at(k);
		// 	// cout << "i = " << i << ", k = " << k << ", a_i = " << a_i << ", a_k = " << a_k << ": " << a_i * a_k * (int)(2 << (i - k)) % 998244353 << endl;
		// 	sum += (a_i * a_k % 998244353) * ((int)(1 << (i - k - 1)) % 998244353);
		// 	sum %= 998244353;
		// }
	}

	cout << sum % 998244353 << endl;
	return 0;
}
