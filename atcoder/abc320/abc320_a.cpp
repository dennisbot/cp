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

ll power(size_t base, size_t exponent) {
    ll res = 1;
    for (size_t i = 0; i < exponent; i++) {
        res *= base;
    }

    return res;
}

ll solve(size_t A, size_t B) {
    return power(A, B) + power(B, A);
}

int main() {
    size_t A, B;
    while (cin >> A >> B) {
        cout << solve(A, B) << endl;
    }

    return 0;
}
