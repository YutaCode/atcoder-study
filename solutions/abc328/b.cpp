#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool is_zorome(int month, int day) {
    // 与えられた月と日がゾロ目になるか判定する関数
    string month_str = to_string(month);
    string day_str = to_string(day);
    set<char> unique_digits(month_str.begin(), month_str.end());
    unique_digits.insert(day_str.begin(), day_str.end());
    return unique_digits.size() == 1;
}

int count_zorome_dates(int N, const vector<int>& D) {
    // 1 年のうちにゾロ目になる日が何日あるかを数える関数
    int zorome_count = 0;
    for (int month = 1; month <= N; ++month) {
        for (int day = 1; day <= D[month - 1]; ++day) {
            if (is_zorome(month, day)) {
                zorome_count++;
            }
        }
    }
    return zorome_count;
}

int main() {
    // 入力
    int N;
    cin >> N; // 月の数

    vector<int> D(N);
    for (int i = 0; i < N; ++i) {
        cin >> D[i]; // 各月の日数
    }

    // 出力
    int result = count_zorome_dates(N, D);
    cout << result << endl;

    return 0;
}
