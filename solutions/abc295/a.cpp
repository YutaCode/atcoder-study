#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> W(N);
	for (int i = 0; i < N; i++) cin >> W[i];
	bool is_true = false;
	string list[5] = { "and","not","that","the","you" };

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++) {
			if (W[i] == list[j]) {
				is_true = true;
				break;
			}
		}
	}

	if (is_true) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}