#include <bits/stdc++.h>
using namespace std;
int char_to_int(char c){

}

map<char, int> add_int(map<char, int> ints){
	char int_name;
	cin >> int_name;
	int val = 0;
	char op, num;
	cin >> op >> num;
	if (ints.count(num)) {
		num = ints[num];
	}
	val += (int)num;

	cin >> op;
	while(op != ';'){
		char num;
		cin >> num;

		if (ints.count(num)) {
			num = ints[num];
		}

		if (op == '+') {
			val += (int)num;
		} else {
			val -= (int)num;
		}

		cin >> op;
	}

	ints[int_name] = val;
	cout << ints[int_name] << endl;
	for (auto p : ints){
		auto k = p.first;
		auto v = p.second;
		cout << k << " => " << v << endl;
	}
	return ints;
}

void print_int(map<char, int> ints) {
	int val;
	char op;
	cin >> val >> op;
	while(op != ';'){
		char num;
		cin >> num;

		if (ints.count(num)) {
			num = ints[num];
		}

		if (op == '+') {
			val += (int)num;
		} else {
			val -= (int)num;
		}

		cin >> op;
	}
	cout << val << endl;
}

int main() {
	int n;
	cin >> n;
	map<char, int> ints;
	map<char, vector<char> > vecs;

	for (size_t i = 0; i < n; i++) {
		string order;
		cin >> order;

		if(order == "int"){
			ints = add_int(ints);
		} else if(order == "print_int"){
			print_int(ints);
		// } else if(order == "vec"){
		// 	add_vec(vecs);
		// } else if(order == "print_vec"){
		// 	print_vec();
		}
	}

	return 0;
}
