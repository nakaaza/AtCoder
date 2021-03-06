#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, y;
	cin >> n >> y;
	for (long i = 0; i <= n; i++) {
		y -= 10000 * i;
		for (long j = 0; j <= n - i; j++) {
			y -= 5000 * j + 1000 * (n - i - j);
			if(y == 0){
				cout << i << " " << j << " " << (n - i - j) << endl;
				return 0;
			}
			y += 5000 * j + 1000 * (n - i - j);
		}
		y += 10000 * i;
	}
	cout << -1 << " " << -1 << " " << -1 << endl;
	return 0;
}
