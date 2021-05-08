#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vi battle(vi a){
	int count = a.size();
	if(count == 2) return a;
	vi b;
	for (int i = 0; i < count; i += 2) {
		b.push_back(max(a.at(i), a.at(i + 1)));
	}
	return battle(b);
}

int main() {
	int n;
	cin >> n;
	vi a(1 << n);
	for(int& i: a) cin >> i;
	vi final = battle(a);
	int silver = min(final.at(0), final.at(1));
	auto itr = find(a.begin(), a.end(), silver);
	cout << distance(a.begin(), itr) + 1 << endl;
	return 0;
}
