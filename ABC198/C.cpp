#include <bits/stdc++.h>
using namespace std;

int main() {
  long long r, x, y;
  cin >> r >> x >> y;
	float d = sqrt(x * x + y * y);
	long long step;
	if(d < (float)r){
		step = 2;
	} else {
		step = (fmod(d, (float)r) == 0) ? (int)d / r : (int)d / r + 1;
	}
	cout << step << endl;
	return 0;
}
