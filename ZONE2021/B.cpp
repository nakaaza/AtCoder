#include <bits/stdc++.h>
using namespace std;
using vf = vector<float>;
int main() {
  float N, D, H;
  cin >> N >> D >> H;
	vf k(N);
	for(int i = 0; i < N; i++){
		float d, h;
		cin >> d >> h;
		float k_i = (H - h) / (D - d);
		k.at(i) = k_i;
	}
	sort(k.begin(), k.end());
	float k_min = k.at(0);
	float ans = (H - D * k_min >= 0.0) ? H - D * k_min : 0.0;
	cout << fixed << setprecision(15);
	cout << ans << endl;
	return 0;
}
