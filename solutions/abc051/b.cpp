// アルゴリズム　演習3.6

#include<iostream>

using namespace std;

int main() {
	//変数の入力
	int K, N;
	int X, Y;
	cin >> K >> N;
	int count = 0;

	//アルゴリズム
	for (X = 0; X <= K; X++) {
		for (Y = 0; Y <= K; Y++) {
			if (0 <= (N - X - Y) && (N - X - Y) <= K) count++;
		}
	}

	cout << count << endl;
}