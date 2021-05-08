#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
  ld n, x0, y0, xop, yop;
  cin >> n >> x0 >> y0 >> xop >> yop;
	ld mx, my;
	mx = (xop + x0) / 2;
	my = (yop + y0) / 2;
	ld s, c;
	s = sin( 2 * M_PI / n);
	c = (n == 4) ? 0 : cos( 2 * M_PI / n);
	ld x1, y1;
	x1 = (x0 - mx) * c - (y0 - my) * s + mx;
	y1 = (x0 - mx) * s + (y0 - my) * c + my;

	cout << fixed << setprecision(15);
	cout << x1 << " " << y1 << endl;
	return 0;
}
