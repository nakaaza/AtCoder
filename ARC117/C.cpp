#include <bits/stdc++.h>
using namespace std;

string pyramid(string s, unordered_map<string, string> next_char, int count){
	for (size_t i = 0; i < count; i++) {
		cout << " ";
	}
	for (size_t i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
	cout << endl;
	if(s.size() == 1) return s;
	string next_s = "";
	for (size_t i = 0; i < s.size() - 1; i++) {
		string st = { s[i], s[i+1] };
		next_s += next_char.at(st);
	}
	count++;
	return pyramid(next_s, next_char, count);
}

int main() {
	unordered_map<string, string> next_char;
		next_char["BB"] = "B";
		next_char["WW"] = "W";
		next_char["RR"] = "R";
		next_char["BW"] = "R";
		next_char["BR"] = "W";
		next_char["WR"] = "B";
		next_char["WB"] = "R";
		next_char["RB"] = "W";
		next_char["RW"] = "B";

  int n;
	string s;
  cin >> n;
	cin >> s;
	string top = pyramid(s, next_char, 0);
	cout << top << endl;
	return 0;
}
