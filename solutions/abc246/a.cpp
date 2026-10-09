#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<vector<int>> x(3, vector<int>(2));
	rep(i, 3) {
		rep(j, 2) {
			cin >> x.at(i).at(j);
		}
	}

	if (x.at(0).at(0) == x.at(1).at(0)) cout << x.at(2).at(0) << " ";
	else if(x.at(0).at(0) == x.at(2).at(0)) cout << x.at(1).at(0) << " ";
	else cout << x.at(0).at(0) << " ";

	if (x.at(0).at(1) == x.at(1).at(1)) cout << x.at(2).at(1) << endl;
	else if (x.at(0).at(1) == x.at(2).at(1)) cout << x.at(1).at(1) << endl;
	else cout << x.at(0).at(1) << endl;

	return 0;
}
