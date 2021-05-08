#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
	int ans;
	ans = ((y * z) % x == 0) ? (y * z) / x - 1 : (y * z) / x;
	cout << ans << endl;
	return 0;
}
