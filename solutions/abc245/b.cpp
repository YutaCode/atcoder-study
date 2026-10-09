#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	

	rep(i, 2001) {
		bool is_found = false;
		rep(j, n) {
			if (a[j] == i) {
				is_found = true;
				break;
			}
		}
		if (!is_found) {
			cout << i << endl;
			return 0;
		}
	}
}