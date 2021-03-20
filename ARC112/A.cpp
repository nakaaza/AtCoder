// 2021-03-14 08:00-08:45
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long l, r;
		cin >> l >> r;
		long long count = 0;
		if(r < 2 * l){
			cout << count << endl;
			continue;
		}
		// for (long long c = l; c <= r; c++) {
		// 	if(r - c - l < 0) break;
		// 	count += (r - c - l + 1);
		// }
		count = ((r - l + 1) * (r - 3 * l + 2) + (l - 1) * l) / 2;
		cout << count << endl;
	}
	return 0;
}
