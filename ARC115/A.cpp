#include <bits/stdc++.h>
using namespace std;
using vs = vector<bitset<20> >;
int main() {
  int n, m;
  cin >> n >> m;
	vs answers;
	answers.reserve( n );
	int count = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		bitset<20> a(s);
		answers.push_back(a);
		if(i == 0) continue;

		for (int k = 0; k < i; k++) {
			bitset<20> b(answers.at(k));
			bitset<20> c = a ^ b;
			// cout << "a: " << a << ", b: " << b << ", c: " << c << ", ";
			count += c.count() % 2;
			// cout << "xor: " << xor_count << ", count: " << count << endl;
		}
	}

	cout << count << endl;
	return 0;
}
