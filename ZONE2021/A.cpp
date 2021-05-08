#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
	int count = 0;
	for(int i=0; i<9; i++){
		if(s.substr(i, 4) == "ZONe") count++;
	}
	cout << count << endl;
	return 0;
}
