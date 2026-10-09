#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;
	
	int n = (int)s.size();
	
	int cnt = 1;
	rep(i, n - 1) {
		if (s[i] == s[i + 1]) cnt++;
		else {
			cout << s[i] << cnt;
			cnt = 1;
		}
	}

	cout << s[n - 1] << cnt << endl;
	return 0;
}