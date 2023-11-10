#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
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

string S;
size_t N;

bool solve() {
    for (size_t i = 0; i + 1 < N; i++) {
        if (abs(S[i] - S[i + 1]) == 1 && (S[i] == 'a' || S[i] == 'b')) {
            return true;
        }
    }

    return false;
}

int main() {
    while (cin >> N >> S) {
        cout << (solve() ? "Yes" : "No") << endl;
    }

    return 0;
}
