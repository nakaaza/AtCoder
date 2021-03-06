#include <bits/stdc++.h>
using namespace std;
bool all_even(vector<int> v){
	for (size_t i = 0; i < v.size(); i++) {
		if(v.at(i) % 2 != 0){
			return false;
		}
	}
	return true;
}

vector<int> half(vector<int> v){
	for (size_t i = 0; i < v.size(); i++) {
		v.at(i) /= 2;
	}
	return v;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	int count = 0;

	for (size_t i = 0; i < n; i++) {
		cin >> v.at(i);
	}

	while (all_even(v)) {
		count++;
		v = half(v);
	}
	
	cout << count << endl;
	return 0;
}
