#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
	vector<int> cases;
	for (int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		cases.push_back(n);
	}
	for(auto n: cases){
		string ans = "Odd";
		if( n % 2 == 0) ans = "Same";
		if( n % 4 == 0) ans = "Even";
		cout << ans << endl;
	}
	return 0;
}
