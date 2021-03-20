// 2021-03-14 00:15-00:
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double x;
	cin >> n >> x;
	vector<double> drink(n);
	for(int i = 0; i < n; i++){
		double v, p, alc;
		cin >> v >> p;
		alc = v * p / 100;
		drink.at(i) = alc;
	}
	// for(auto alc : drink){
	// 	cout << alc << ", ";
	// }
	// cout << endl;

	double sum = 0;
	for(int i = 0; i < n; i++){
		sum += drink.at(i);
		// cout << sum << endl;
		if(sum > x ){
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
