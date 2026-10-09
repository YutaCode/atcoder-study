#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> X(3);
	rep(i, 3) cin >> X.at(i);

	sort(X.begin(), X.end());
	
	if (X.at(0) + X.at(1) == X.at(2)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
