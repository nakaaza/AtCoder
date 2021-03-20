#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;
	int p = x.find(".");
	if (p == string::npos) {
		cout << x << endl;
	} else {
		x = x.substr(0, p);
		cout << x << endl;
	}
	return 0;
}
