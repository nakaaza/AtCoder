#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if(b >= 2 * a){
		cout << b / 2 << endl;
		return 0;
	}
	for (int i = b - a; i > 0; i--) {
		for (int j = a; j <= b - i; j++) {
			if(j % i == 0){
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}
