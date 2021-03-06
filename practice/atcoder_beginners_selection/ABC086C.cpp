#include <bits/stdc++.h>
using namespace std;

bool travel_goes_on(vector<long> v1, vector<long> v2){
	// cout << v1 << ", " << v2 << endl;
	long time = v2.at(0) - v1.at(0);
	long x_d = v2.at(1) - v1.at(1);
	long y_d = v2.at(2) - v1.at(2);
	// cout << "time: " << time << ", x_d: " << x_d << ", y_d: " << y_d << endl;
	long sum_d = x_d + y_d;
	long time_p = time % 2;
	long path_p = sum_d % 2;
	// cout << "sum_d: " << sum_d << ", time_p: " << time_p << ", path_p: " << path_p << endl;
	if (sum_d > time || time_p != abs(path_p)) {
		return false;
	}
	return true;
}

int main() {
	long n;
	cin >> n;

	vector< vector<long> > v(n + 1, vector<long>(3));
	for (int i = 0; i < 3; i++) {
		v.at(0).at(i) = 0;
	}

	for (long i = 1; i < n + 1; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> v.at(i).at(j);
		}
	}

	for (long i = 0; i < n; i++) {
		if(!travel_goes_on(v.at(i), v.at(i + 1))){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
