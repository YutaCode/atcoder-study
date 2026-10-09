#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<int> X(5);
	rep(i, 5) cin >> X.at(i);

	sort(X.begin(), X.end());

	if ((X.at(0) == X.at(1) && X.at(0) == X.at(2) && X.at(3) == X.at(4)) || (X.at(2) == X.at(3) && X.at(2) == X.at(4) && X.at(0) == X.at(1))) cout << "Yes" << endl;
	else cout << "No" << endl;

}