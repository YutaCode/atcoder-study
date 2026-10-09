#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    rep(i, m) cin >> d.at(i);

    int sum = 0;
    rep(i, m) sum += d.at(i);
    int index = (sum + 1) / 2;

    int a = 1;
    int b = index;
    int day = 0;

    rep(i, m) {
        day += d.at(i);
        if (day < index) {
            a++;
            b = index - day;
        }
    }

    cout << a << " " << b << endl;

    return 0;
}