#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	cin >> n;
	vector<long> v(n);
	long sum = 0;
	long sq_sum = 0;
	for (long i = 0; i < n; i++) {
		cin >> v.at(i);
		sum += v.at(i);
		sq_sum += pow(v.at(i), 2);
	}
	long val = n * sq_sum - pow(sum, 2);
	cout << val << endl;
	return 0;
}
