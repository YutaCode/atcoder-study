#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxGiftsInInterval(vector<int>& a, int M) {
    sort(a.begin(), a.end());
    int maxGifts = 0;
    int j = 0;  // ポインタを導入

    for (int i = 0; i < a.size(); i++) {
        while (j < a.size() && a.at(j) < a[i] + M) {
            j++;
        }

        maxGifts = max(maxGifts, j - i);
    }

    return maxGifts;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    int result = maxGiftsInInterval(a, M);
    cout << result << endl;

    return 0;
}
