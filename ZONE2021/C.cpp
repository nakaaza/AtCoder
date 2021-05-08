#include <bits/stdc++.h>
using namespace std;
using ll   = long long;
using vl = vector<long long>;
using vvll = vector<vl>;

int calc_genaral_val(vvll team){
	int a = max({team.at(0).at(0), team.at(1).at(0), team.at(2).at(0)});
	int b = max({team.at(0).at(1), team.at(1).at(1), team.at(2).at(1)});
	int c = max({team.at(0).at(2), team.at(1).at(2), team.at(2).at(2)});
	int d = max({team.at(0).at(3), team.at(1).at(3), team.at(2).at(3)});
	int e = max({team.at(0).at(4), team.at(1).at(4), team.at(2).at(4)});
	int mini = min({a, b, c, d, e});
	return mini;
}

int main() {
  int n;
  cin >> n;
	vvll talent(n);
	for(int i=0; i < n; i++){
		long long a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		vl v =  { a, b, c, d, e };
		talent.at(i) = v;
	}
	vvll team =  { talent.at(0), talent.at(1), talent.at(2) };
	int general_v = calc_genaral_val(team);
	for(int i=3; i<n; i++){
		string winner = "team";
		vvll team1 = { talent.at(i), team.at(1), team.at(2) };
		int general_v_1 = calc_genaral_val(team1);
		if(general_v_1 > general_v){
			winner = "team1";
		}
		vvll team2 = { team.at(0), talent.at(i), team.at(2) };
		int general_v_2 = calc_genaral_val(team2);
		if(general_v_2 > general_v && general_v_2 > general_v_1){
			winner = "team2";
		}
		vvll team3 = { team.at(0), team.at(1), talent.at(i) };
		int general_v_3 = calc_genaral_val(team3);
		if(general_v_3 > general_v && general_v_3 > general_v_1 && general_v_3 > general_v_2){
			winner = "team3";
		}
		if(winner == "team1"){
			team = team1;
			general_v = general_v_1;
		} else if(winner == "team2"){
			team = team2;
			general_v = general_v_2;
		} else if(winner == "team3"){
			team = team3;
			general_v = general_v_3;
		}
	}
	cout << general_v << endl;
	return 0;
}
