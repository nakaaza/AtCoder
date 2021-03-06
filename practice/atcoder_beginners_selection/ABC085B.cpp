#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> d(n);
	for (int i = 0; i < n; i++) {
		cin >> d.at(i);
	}

	sort(d.begin(), d.end());
	reverse(d.begin(), d.end());

	int count = 0;
	for (int i = 0; i < n; i++) {
		if(i < n - 1 && d.at(i) == d.at(i + 1)){
			continue;
		}
		count++;
	}

	cout << count << endl;
	return 0;
}
