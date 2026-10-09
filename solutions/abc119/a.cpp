#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	if (s.at(5) == '1') cout << "TBD" << endl;
	else if ((s.at(6) - '0') > 4) cout << "TBD" << endl;
	else cout << "Heisei" << endl;
 
	return 0;
}
