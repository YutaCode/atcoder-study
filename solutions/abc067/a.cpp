#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B;
	cin >> A >> B;

	if ((A + B) % 3 == 0) cout << "Possible" << endl;
	else if (A % 3 == 0) cout << "Possible" << endl;
	else if (B % 3 == 0) cout << "Possible" << endl;
	else cout << "Impossible" << endl;

	return 0;
}
