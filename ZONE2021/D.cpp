#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
	deque<char> t;
	bool reverse_f = false;
	for (size_t i = 0; i < s.size(); i++) {
		if(s[i] == 'R'){
			reverse_f = !reverse_f;
		} else {
			if(reverse_f){
				if(t.size() > 0 && s[i] == t.at(0)){
					t.pop_front();
				} else {
					t.push_front(s[i]);
				}
			} else {
				if(t.size() > 0 && s[i] == t[t.size() - 1]){
					t.pop_back();
				} else {
					t.push_back(s[i]);
				}
			}
		}
	}
	if(reverse_f) reverse(t.begin(), t.end());
	for (size_t i = 0; i < t.size(); i++) {
		cout << t.at(i);
	}
	cout << endl;
	return 0;
}
