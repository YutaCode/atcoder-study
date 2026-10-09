#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	string s;
	cin >> s;

	int x1 = (s[0] - '0') * 10 + (s[1] - '0');
	int x2 = (s[2] - '0') * 10 + (s[3] - '0');

	bool YYMM = false, MMYY = false;

	if (1 <= x1 && x1 <= 12) MMYY = true;
	if (1 <= x2 && x2 <= 12) YYMM = true;

	if (MMYY && YYMM) cout << "AMBIGUOUS" << endl;
	else if (MMYY) cout << "MMYY" << endl;
	else if (YYMM) cout << "YYMM" << endl;
	else cout << "NA" << endl;
	return 0;
}