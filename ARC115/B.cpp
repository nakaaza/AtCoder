#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main() {
  int n, a0;
  cin >> n >> a0;
	vi as;
	vi bs;
	vi ads;
	vi bds;
	as.push_back(a0);
	bs.push_back(a0);

	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		as.push_back(a);
		ads.push_back(a - as.at(i));
	}

	for (int i = 0; i < n - 1; i++) {
		int b0;
		cin >> b0;
		vi row;
		bs.push_back(b0);
		row.push_back(b0);
		bds.push_back(b0 - bs.at(i));
		for (int j = 0; j < n - 1; j++) {
			int b;
			cin >> b;
			row.push_back(b);
			int db = b - row.at(j);
			if(db != ads.at(j)){
				cout << "No" << endl;
				return 0;
			}
		}
	}

	int a_min = as.at(0);
	for(auto a: as){
		a_min = min(a_min, a);
	}

	int b_min = bs.at(0);
	for(auto b: bs){
		b_min = min(b_min, b);
	}

	int ad, bd;
	if (a_min > b_min) {
		ad = as.at(0) - b_min;
		bd = b_min;
	} else {
		ad = a_min;
		bd = bs.at(0) - a_min;
	}

	for (int i = 0; i < n; i++) {
		as.at(i) -= ad;
		bs.at(i) -= bd;
	}

	cout << "Yes" << endl;
	for(auto b: bs){
		cout << b << " ";
	}
	cout << endl;
	for(auto a: as){
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
