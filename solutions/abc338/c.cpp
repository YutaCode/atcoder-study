#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)

using namespace std;

const int MAX_Q = 1e6;

int maxPeople(const vector<int>& Q, const vector<int>& recipe) {
    int minPeople = MAX_Q;
    rep(i, Q.size()) {
        if (recipe[i] == 0) continue;
        minPeople = min(minPeople, Q[i] / recipe[i]);
    }
    return minPeople;
}

int maxTotalPeople(const vector<int>& Q, const vector<int>& A, const vector<int>& B) {
    int maxTotal = 0;
    int maxPeopleA = maxPeople(Q, A);
    rep(a, maxPeopleA + 1) {
        vector<int> remainingQ(Q.size());
        rep(i, Q.size()) {
            remainingQ[i] = Q[i] - A[i] * a;
            if (remainingQ[i] < 0) break;
        }
        if (*min_element(remainingQ.begin(), remainingQ.end()) < 0) continue;
        int b = maxPeople(remainingQ, B);
        maxTotal = max(maxTotal, a + b);
    }
    return maxTotal;
}

int main() {
    int N;
    cin >> N;
    vector<int> Q(N), A(N), B(N);
    rep(i, N) cin >> Q[i];
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    cout << maxTotalPeople(Q, A, B) << endl;
    return 0;
}
