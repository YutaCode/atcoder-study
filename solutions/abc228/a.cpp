#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int s, t, x;
	cin >> s >> t >> x;

	if (s < t) {
		if (s <= x && x < t) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	else {
		if (s <= x || x < t) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
 
	return 0;
}
