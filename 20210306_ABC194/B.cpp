#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a.at(i) >> b.at(i);
	}

	int sum_min = 200000;
	for (int i = 0; i < n; i++) {
		if (sum_min > a.at(i) + b.at(i)) {
			sum_min = a.at(i) + b.at(i);
		}
	}

	int a_min = 100000;
	int a_next = 0;
	int a_who = 0;
	for (int i = 0; i < n; i++) {
		if (a_min > a.at(i)) {
			a_next = a_min;
			a_min = a.at(i);
			a_who = i;
		} else if(a_next > a.at(i)){
			a_next = a.at(i);
		}
	}

	int b_min = 100000;
	int b_next = 0;
	int b_who = 0;
	for (int i = 0; i < n; i++) {

		if (b_min > b.at(i)) {
			b_next = b_min;
			b_min = b.at(i);
			b_who = i;
		} else if(b_next > b.at(i)){
			b_next = b.at(i);
		}
	}

	int min_t;
	if (a_who == b_who) {
		min_t = min(max(a_min, b_next), max(a_next, b_min));
	} else {
		min_t = max(a_min, b_min);
	}

	cout << min(sum_min, min_t) << endl;
	return 0;
}
