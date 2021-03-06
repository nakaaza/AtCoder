#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

	int max_int, min_int;
	max_int = max(max(A, B), C);
	min_int = min(min(A, B), C);

	cout << max_int - min_int << endl;
}
