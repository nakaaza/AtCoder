// 2021-03-14 00:12-00:15
#include <bits/stdc++.h>
using namespace std;

int main(){
	string c;
	cin >> c;
	if (c.at(0) == c.at(1) && c.at(0) == c.at(2)) {
		cout << "Won" << endl;
	} else {
		cout << "Lost" << endl;
	}
	return 0;
}
