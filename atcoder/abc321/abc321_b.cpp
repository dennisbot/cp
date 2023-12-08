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
typedef long long ll;
#define db(a) cout << #a << " = " << a << endl;
#define db2(a, b) cout << #a << " = " << a << " " << #b << " = " << b << endl;
#define db3(a, b, c) cout << #a << " = " << a << " " << #b << " = " << b << " " << #c << " = " << c << endl;
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

long long solve(const vector<ll>& scores, ll minimum_target) {
    auto lmin = *min_element(scores.begin(), scores.end());
    auto lmax = *max_element(scores.begin(), scores.end());
    auto sum = accumulate(scores.begin(), scores.end(), 0);

    for (int an = 0; an < 101; an++) {
        auto current = 0;
        auto llmin = lmin;
        auto llmax = lmax;

        if (an < llmin) {
            llmin = an;
        } else if (an > llmax) {
            llmax = an;
        } else {
            current = an;
        }

        auto current_score = sum + current - llmin - llmax;

        if (current_score >= minimum_target) {
            return an;
        }
    }

    return -1;
}

int main() {
    ll N, X;
    while (cin >> N >> X) {
        vector<ll> scores(N - 1);
        for (auto& score : scores) {
            cin >> score;
        }

        cout << solve(scores, X) << endl;
    }

    return 0;
}
