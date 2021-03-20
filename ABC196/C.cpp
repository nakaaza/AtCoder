#include <bits/stdc++.h>
using namespace std;

long long get_add_count(long long n, int exp){
	long long add_count = 0;
	string first_str, second_str;
	first_str = to_string(n).substr(0, (exp + 1) / 2);
	second_str = to_string(n).substr((exp + 1) / 2);
	long long first, second;
	first = stoll(first_str);
	second = stoll(second_str);
	long long mini = min(first, second);
	if(mini < (int)pow(10, (exp - 1) / 2)){
		add_count = (int)pow(10, (exp - 1) / 2) - 1;
	} else {
		add_count = mini;
	}
	return add_count;
}

int main() {
  long long n;
  cin >> n;

	if(n < 100){
		cout << (int)n / 11 << endl;
		return 0;
	}

	long long count = 0;
	double exp = log10(n);
	if((int)exp % 2 == 0){
		count = (int)pow(10, (int)exp / 2) - 1;
	} else {
		count = get_add_count(n, (int)exp);
	}

	cout << count << endl;
	return 0;
}
