#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int length = min(a.size(), b.size());

    rep(i, length) {
        if ((a[i] - '0') + (b[i] - '0') >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;
    return 0;
}