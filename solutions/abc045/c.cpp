// アルゴリズム　演習3.7

#include<iostream>
#include<vector>

using namespace std;

int main() {
	//変数の入力
	string S;
	cin >> S;
	int N;
	N = S.length();
	vector <int> a(N); //Sの中身をint型に変換した後の数値を格納するためのベクトル


	//アルゴリズム
	for (int i = 0; i < N; i++) {
		a[i] = S[i] - '0'; //char型からint型への変換
	}

	long long result = 0;
	long long tmp = 0;

	for (int bit = 0; bit < (1 << (N - 1)); bit++) {
		for (int i = 0; i < N; i++) {
			tmp *= 10;
			tmp += a[i];
			if (bit & (1 << i)) {
				result += tmp;
				tmp = 0;
			}

			if (i == (N - 1)) {
				result += tmp;
				tmp = 0;
			}
		}
	}
	cout << result << endl;
}