#include<iostream>
#include<vector>
#include<algorithm>
#define rep(i,N) for(int i = 0; i < N; i++) //if文の条件式を毎回書くのが面倒なのでrep()として定義した
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<string> S(N);
	rep(i, N) cin >> S[i];
	vector<int> w(N);

	rep(i, N) {
		rep(j, N) {
			if (S[i][j] == 'o') w[i]++;
		}
	}

	vector<int>ans(N);
	rep(i, N) ans[i] = i;
	sort(ans.begin(), ans.end(), [&](int a, int b) {
		if (w[a] == w[b]) return a < b;
		return w[a] > w[b];
		});

	rep(i, N) cout << ans[i] + 1 << " " ;
	
}