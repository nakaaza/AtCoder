#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
	string ans = (abs(x - y) < 3) ? "Yes" : "No";
	cout << ans << endl;
	return 0;
}
