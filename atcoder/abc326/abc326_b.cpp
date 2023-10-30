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

size_t solve() {
    size_t a, b, c;
    for (size_t curN = N; curN < 920; curN++) {
        a = curN / 100;    
        b = (curN / 10) % 10;
        c = curN % 10;
        if (a * b == c) {
            return a * 100 + b * 10 + c;
        }
    }

    return 0;
}

int main() {
    while (cin >> N) {
        cout << solve() << endl;
    }

    return 0;
}
