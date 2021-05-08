#include <bits/stdc++.h>
using namespace std;

int h_count(vector<string> grid, int h, int w, int x, int y){
	int count = 0;
	int i = x + 1;
	while (i <= h && grid.at(i - 1)[y - 1] != '#') {
		count++;
		i++;
	}

	int j = x - 1;
	while (1 <= j && grid.at(j - 1)[y - 1] != '#') {
		count++;
		j--;
	}

	return count;
}

int w_count(vector<string> grid, int h, int w, int x, int y){
	int count = 0;
	int i = y + 1;
	while (i <= w && grid.at(x - 1)[i - 1] != '#') {
		count++;
		i++;
	}

	int j = y - 1;
	while (1 <= j && grid.at(x - 1)[j - 1] != '#') {
		count++;
		j--;
	}

	return count;
}

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
	vector<string> grid;
	for (int i = 0; i < h; i++) {
		string s;
		cin >> s;
		grid.push_back(s);
	}
	int count = 1;
	count += h_count(grid, h, w, x, y);
	count += w_count(grid, h, w, x, y);
	cout << count << endl;
	return 0;
}
