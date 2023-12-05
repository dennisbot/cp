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

string N;

bool solve() {
    size_t len = N.size();
    bool ok = true;
    for (size_t i = 0; i + 1 < len && ok; i++) {
        if (N[i] <= N[i + 1]) {
            ok = false;
        }
    }

    return ok;
}

int main() {
    while (cin >> N) {
        cout << (solve() ? "Yes" : "No") << endl;
    }

    return 0;
}
