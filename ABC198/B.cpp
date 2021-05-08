#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
	if (n == 0) {
		cout << "Yes" << endl;
		return 0;
	}
	while(n % 10 == 0){
		n = n / 10;
	}
	string str = to_string(n);
	int len = str.size();
	string a = str.substr(0, len / 2);
	string b = str.substr((len + 1) / 2, len);
	reverse(b.begin(), b.end());
	string ans = (a == b) ? "Yes" : "No";
	cout << ans << endl;
	return 0;
}
