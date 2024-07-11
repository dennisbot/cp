#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define db(a) cout << #a << " = " << a << endl;
#define db2(a, b) cout << #a << " = " << a << " " << #b << " = " << b << endl;
#define db3(a, b, c) cout << #a << " = " << a << " " << #b << " = " << b << " " << #c << " = " << c << endl;
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

size_t N, L;

auto solve(const vector<size_t>& scores, const size_t& at_least) {
    auto total = 0;
    for (const auto& score : scores) {
        if (score >= at_least) {
            total++;
        }
    }

    return total;
}

int main() {
    while (cin >> N >> L) {
        vector<size_t> scores(N);
        for (auto& score : scores) {
            cin >> score;
        }

        cout << solve(scores, L) << endl;
    }

    return 0;
}
