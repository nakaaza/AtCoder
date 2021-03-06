#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a.at(i);
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		if(i % 2 == 0){
			v.at(i) = 1;
		} else {
			v.at(i) = -1;
		}
	}

	int p = inner_product(a.begin(), a.end(), v.begin(), 0);
	cout << p << endl;
	return 0;
}
