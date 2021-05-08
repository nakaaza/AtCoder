#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main() {
  int a, b;
  cin >> a >> b;
	int d = a - b;
	vi e(a + b);
	for(int i = 0; i < a; i++){
		e.at(i) = i + 1;
	}
	for(int i = 0; i < b; i++){
		e.at(i + a) = -(i + 1);
	}
	int m = 0;
	if(d > 0){
		for(int i = a; i > b; i--){
			m -= i;
		}
		e.at(a + b - 1) += m;
	} else if(d < 0) {
		for(int i = b; i > a; i--){
			m += i;
		}
		e.at(a - 1) += m;
	}

	for(auto ei: e){
		cout << ei << " ";
	}
	cout << endl;
	return 0;
}
