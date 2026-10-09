#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> votes(N + 1, 0);  // インデックス1からNまで使用するためサイズN+1
    vector<int> winners(M);

    int maxVotes = 0, winner = -1;

    rep(i, M) {
        int Ai;
        cin >> Ai;

        votes[Ai]++;

        if (votes[Ai] > maxVotes) {
            maxVotes = votes[Ai];
            winner = Ai;
        } else if (votes[Ai] == maxVotes && Ai < winner) {
            winner = Ai;
        }

        winners[i] = winner;
    }

    rep(i, M) {
        cout << winners[i] << endl;
    }

    return 0;
}
