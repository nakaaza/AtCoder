#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
	bitset<1000> a(0), b(0);
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		a.set(num - 1);
	}
	for(int i = 0; i < m; i++){
		int num;
		cin >> num;
		b.set(num - 1);
	}
	bitset<1000> c = a ^ b;
	for (size_t i = 0; i < 1000; i++) {
		if(c.test(i)){
			cout << i + 1 << " ";
		}
	}
	cout << endl;
	return 0;
}
