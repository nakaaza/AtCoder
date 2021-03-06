#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int total_sum = 0;
	for (int i = 1; i <= n ; i++) {
		int d1, d2, d3, d4, d5;
		d1 = i / 10000;
		d2 = (i % 10000 - i % 1000) / 1000;
		d3 = (i % 1000 - i % 100) / 100;
		d4 = (i % 100 - i % 10) / 10;
		d5 = i % 10;
		int sum = d1 + d2 + d3 + d4 + d5;
		if(sum >= a && sum <= b){
			total_sum += i;;
		}
	}
	cout << total_sum << endl;
	return 0;
}
