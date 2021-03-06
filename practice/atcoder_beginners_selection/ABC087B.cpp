#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	int count = 0;
	int val = 0;
	for (int i = 0; i <= a; i++) {
		val += 500 * i;
		for (int j = 0; j <= b; j++) {
			val += 100 * j;
			for (int k = 0; k <= c; k++) {
				val += 50 * k;
				cout << i << ", " << j << ", " << k << ": " << val << endl;
				if (val == x) {
					count++;
				}
				val -= 50 * k;
			}
			val -= 100 * j;
		}
		val -= 500 * i;
	}

	cout << count << endl;
	return 0;
}
