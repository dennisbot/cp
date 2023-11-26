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
#define db(a) cout << #a << " = " << a << endl;
#define db2(a, b) cout << #a << " = " << a << " " << #b << " = " << b << endl;
#define db3(a, b, c) cout << #a << " = " << a << " " << #b << " = " << b << " " << #c << " = " << c << endl;
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

size_t N, X;

size_t solve(const vector<size_t>& S) {
    size_t sum = 0;
    for (size_t i = 0; i < N; i++) {
        if (S[i] <= X) {
            sum += S[i];
        }
    }

    return sum;
}

int main() {
    while (cin >> N >> X) {
        vector<size_t> S(N);
        for (size_t i = 0; i < N; i++) {
            cin >> S[i];
        }

        cout << solve(S) << endl;
    }

    return 0;
}
