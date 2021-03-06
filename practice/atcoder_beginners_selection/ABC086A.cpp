#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;
	int p = a * b;
	if (p % 2 == 0) {
		cout << "Even" << endl;
	} else {
		cout << "Odd" << endl;
	}
	return 0;
}
