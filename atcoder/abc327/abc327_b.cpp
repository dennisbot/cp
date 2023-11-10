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

size_t B;

size_t mypow(size_t base, size_t exp) {
    size_t ans = 1;

    for (size_t i = 0; i < exp; i++) {
        ans *= base;
    }

    return ans;
}

int solve() {
    for (size_t A = 1; A < 16; A++) {
        size_t ans = mypow(A, A);
        if (ans == B) {
            return A;
        }
    }

    return -1;
}

int main() {
    while (cin >> B) {
        cout << solve() << endl;
    }

    return 0;
}
