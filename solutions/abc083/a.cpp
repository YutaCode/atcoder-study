#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if ((A + B) < (C + D)) cout << "Right" << endl;
	else if ((A + B) > (C + D)) cout << "Left" << endl;
	else cout << "Balanced" << endl;

	return 0;
}
