#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <cmath>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <vector>
typedef long long ll;
#include <limits>
#include <memory>
#define db(a) cout << #a << " = " << a << endl;
#define db2(a, b) cout << #a << " = " << a << " " << #b << " = " << b << endl;
#define db3(a, b, c) cout << #a << " = " << a << " " << #b << " = " << b << " " << #c << " = " << c << endl;
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

ll solve(const ll& N, const ll& M, string& substr, string& fullstring) {
    bool isprefix = fullstring.substr(0, N) == substr;
    bool issuffix = fullstring.substr(M - N) == substr;

    if (isprefix && issuffix) {
        return 0;
    }

    if (isprefix && !issuffix) {
        return 1;
    }

    if (issuffix && !isprefix) {
        return 2;
    }

    return 3;
}

ll solve_v2(const ll& N, const ll& M, string& substr, string& fullstring) {
    bool isprefix = fullstring.substr(0, N) == substr;
    bool issuffix = fullstring.substr(M - N) == substr;

    if (isprefix) {
        if (issuffix) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
        if (issuffix) {
            return 2;
        }
        else {
            return 3;
        }
    }
}

int main() {
    ll N, M; string S, T;
    while (cin >> N >> M >> S >> T) {
        cout << solve_v2(N, M, S, T) << endl;
    }

    return 0;
}
