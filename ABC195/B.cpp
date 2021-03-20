#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, w;
	cin >> a >> b >> w;
	int mx, mn, av_mx, av_mn;
	w *= 1000;
	mx = w / a;
	mn = (w % b == 0) ? w / b : w / b + 1;
	av_mx = w / mx;
	av_mn = (w % mn == 0) ? w / mn : w / mn + 1;
	if (a <= av_mn && av_mn <= b && a <= av_mx && av_mx <= b) {
		cout << mn << " " << mx << endl;
	} else {
		cout << "UNSATISFIABLE" << endl;
	}
	return 0;
}
