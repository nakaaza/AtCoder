#include <bits/stdc++.h>
using namespace std;

string swap_letter(string s, int a, int b, int j, int n){
	char char1 = s[(j + a - 1) % (2 * n)];
	char char2 = s[(j + b - 1) % (2 * n)];
	s[(j + a - 1) % (2 * n)] = char2;
	s[(j + b - 1) % (2 * n)] = char1;
	return s;
}

int main() {
  int n, q;
	string s;
  cin >> n >> s >> q;
	// vector<tuple<int, int, int> > query(q);
	// for(int i = 0; i < q; i++){
	// 	int t, a, b;
	// 	cin >> t >> a >> b;
	// 	query.at(i) = make_tuple(t, a, b);
	// }
	int count = 0;
	for(int i = 0; i < q; i++){
		int t, a, b;
		cin >> t >> a >> b;
		if(t == 2){
			count++;
		} else {
			int j = (count % 2) * n;
			char char1 = s[(j + a - 1) % (2 * n)];
			char char2 = s[(j + b - 1) % (2 * n)];
			s[(j + a - 1) % (2 * n)] = char2;
			s[(j + b - 1) % (2 * n)] = char1;
		}
	}
	if(count % 2 == 1){
		string str1 = s.substr(0, n);
		string str2 = s.substr(n);
		s = str2 + str1;
	}
	cout << s << endl;
	return 0;
}
