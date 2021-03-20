#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;

vi primes(int N) {
    vi res;
    for (int a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        int ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back(a);
				cout << a << ", ";
    }

    // 最後に残った数について
    if (N != 1) {
			res.push_back(N);
			cout << N << endl;
		} else {
			cout << endl;
		};

		sort(res.begin(), res.end());
    return res;
}

bool is_y_factor(vector<int> y_factor, int a){
	for(auto f : y_factor){
		if(f == a) return true;
	}
	return false;
}


bitset<15> prime_series(vi primes, int a){
	bitset<15> ret("000000000000000");
	for(size_t i = 0; i < primes.size(); i++){
		if(a % primes.at(i) == 0) ret.set(i);
	}
	return ret;
}

vector<vi> all_patterns(vector<vi> xs, int j, vector<vi> patterns, vi stack){
	auto itr = next(xs.begin(), j);
	if(itr == xs.end()) {
		patterns.push_back(stack);
		return patterns;
	};
	for(size_t i = 0; i < itr->size(); i++ ){
		stack.push_back(itr->at(i));
		patterns = all_patterns(xs, j++, patterns, stack);
	}
	return patterns;
}

int main(){
	int n;
	cin >> n;

	// vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	vector<vi> xs(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		xs.at(i) = primes(x);
		// cout << xs.at(i) << endl;
	}

	vector<vi> patterns;
	patterns = all_patterns(xs, 0, patterns, {});
	for (auto p: patterns) {
		for(auto q: p){
			cout << q << ", ";
		}
		cout << endl;
	}
	return 0;
}
