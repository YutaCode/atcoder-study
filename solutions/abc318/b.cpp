#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<vector<int>> x(n, vector<int>(4));
    rep(i, n)rep(j, 4) cin >> x.at(i).at(j);

    vector<vector<char>> s(100, vector<char>(100, 'x'));
    

    rep(i, n) {
        for (int j = x.at(i).at(0); j < x.at(i).at(1); j++) {
            for (int k = x.at(i).at(2); k < x.at(i).at(3); k++) {
                s.at(j).at(k) = 'o';
            }
        }
    }

    int counter = 0;

    rep(i, 100)rep(j, 100) if (s.at(i).at(j) == 'o') counter++;

    cout << counter << endl;

    return 0;
}