#include <bits/stdc++.h>
using namespace std;

long long get_add_count(long long n, int exp){
	long long add_count = 0;
	string first_str, second_str;
	first_str = to_string(n).substr(0, (exp + 1) / 2);
	second_str = to_string(n).substr((exp + 1) / 2);
	long long first, second;
	first = stoll(first_str);
	second = stoll(second_str);
	long long mini = min(first, second);
	if(mini < (int)pow(10, (exp - 1) / 2)){
		add_count = (int)pow(10, (exp - 1) / 2) - 1;
	} else {
		add_count = mini;
	}
	return add_count;
}

int main() {
  int n;
  cin >> n;
	vector<bitset<30> > a;
	for (int i = 0; i < n; i++) {
		long k;
		cin >> k;
		bitset<30> b(k);
		a.push_back(b);
	}
	// sort(a.begin(), a.end());
	for (auto i: a){
		cout << i << endl;
	}
	cout << n << endl;
	return 0;
}
