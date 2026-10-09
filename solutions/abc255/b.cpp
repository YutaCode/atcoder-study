#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#include <queue>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

struct Point {
    double x, y;
};

double distance(const Point & a, const Point & b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

bool isAllIlluminated(const vector<Point>&people, const vector<int>&light_indices, const vector<Point>&points, double R) {
    for (const Point& person : people) {
        bool illuminated = false;
        for (int index : light_indices) {
            if (distance(person, points[index]) <= R) {
                illuminated = true;
                break;
            }
        }
        if (!illuminated) return false;
    }
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> light_indices(K);
    vector<Point> points(N);

    rep(i, K) {
        cin >> light_indices[i];
        light_indices[i]--; // 0-indexedに変換
    }

    rep(i, N) {
        cin >> points[i].x >> points[i].y;
    }

    double left = 0.0, right = 1e9;
    while (right - left > 1e-6) {
        double mid = (left + right) / 2.0;
        if (isAllIlluminated(points, light_indices, points, mid)) {
            right = mid;
        }
        else {
            left = mid;
        }
    }

    cout << fixed << right << endl;

    return 0;
}