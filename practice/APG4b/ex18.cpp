#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

	vector<vector<string> > result(N, vector<string>(N, "-"));
	for (int i = 0; i < M; i++) {
		result.at(A.at(i) - 1).at(B.at(i) - 1) = "o";
		result.at(B.at(i) - 1).at(A.at(i) - 1) = "x";
	}

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			cout << result.at(i).at(k);
			if (k == N - 1) {
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
	return 0;
}
