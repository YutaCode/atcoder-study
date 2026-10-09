#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h,vector<int>(w));
	rep(i, h)rep(j, w) cin >> a[i][j];

	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	

	rep(i, h){
		rep(j, w) {
			if (a[i][j] == 0) cout << '.';
			else cout << alpha[a[i][j] - 1];
		}
		cout << endl;
	}

	return 0;
}