#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;  // a→無脂乳固形分、b→乳脂肪分

	int num = 0;
	int s = a + b;  // 乳固形分

	if (s >= 15 && b >= 8) {
		num = 1;
	} else if (s >= 10 && b >= 3) {
		num = 2;
	} else if (s >= 3){
		num = 3;
	} else {
		num = 4;
	}
	cout << num << endl;
	return 0;
}
