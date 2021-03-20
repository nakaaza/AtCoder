#include <bits/stdc++.h>
using namespace std;
long long pow_int(long long base, long long p){
	long long ret = base;
	for (long long i = 1; i < p; i++) {
		ret *= base;
	}
	return ret;
}

long long count_commas(long long begin, long long end, long long p, long long commas){
	// cout << begin << "\t" << end << "\t" << p << "\t" << commas << endl;
	if(p < 3) return 0;
	commas = count_commas(pow_int(10, p - 3) - 1, begin, p - 3, commas);
	commas += (end - begin) * (p / 3);
	return commas;
}

int main(){
	long long n;
	cin >> n;
	long long p = log10(n);
	p = p / 3 * 3;
	long long commas = 0;
	// cout << n << " " << p << endl;
	commas += (n - (pow_int(10, p) - 1)) * (p / 3);
	// cout << pow_int(10, p) - 1 << "\t" << n << "\t" << p << "\t" << commas << endl;
	commas += count_commas(pow_int(10, p - 3) - 1, pow_int(10, p) - 1, p - 3, commas);
	cout << commas << endl;
	return 0;
}
