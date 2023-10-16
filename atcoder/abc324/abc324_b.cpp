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

size_t N;

string solve() {
    double x = floor(log(N) / log(2));
    double y = floor(log(N) / log(3));

    size_t result = 0;
    for (size_t j = 0; j <= y; j++) {
        for (size_t i = 0; i <= x; i++) {
            result = pow(2, i) * pow(3, j);
            if (N < result) {
                break;
            }
            if (N == result) {
                return "Yes";
            }
        }
    }

    return "No";
}

int main() {
    while (cin >> N) {
        cout << solve() << endl;
    }

    return 0;
}
