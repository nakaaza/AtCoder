#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum, ave;
  cin >> N;
	sum = 0;
	vector<int> v(N);
	for (size_t i = 0; i < N; i++) {
		cin >> v.at(i);
		sum += v.at(i);
	}
	ave = sum / N;
	for (size_t i = 0; i < N; i++) {
		cout << abs(v.at(i) - ave) << endl;
	}

}
