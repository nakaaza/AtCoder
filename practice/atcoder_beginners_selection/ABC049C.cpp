#include <bits/stdc++.h>
using namespace std;
int end_with_right_str(string s){
	int len = s.size();
	if (s.substr(len - 5) == "erase" ||
	    s.substr(len - 5) == "dream") {
		return 5;
	} else if (s.substr(len - 6) == "eraser") {
		return 6;
	} else if (s.substr(len - 7) == "dreamer") {
		return 7;
	}
	return -1;
}

int main() {
	string s, t;
	cin >> s;
	while (s.size() >= 5 && end_with_right_str(s) != -1) {
		// cout << end_with_right_str(s) << endl;
		s = s.substr(0, s.size() - end_with_right_str(s));
		// cout << s << endl;
		if(s == ""){
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
