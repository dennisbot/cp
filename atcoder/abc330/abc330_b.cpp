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

size_t N, L, R;

void solve(const vector<size_t>& numbers, const size_t& left, const size_t& right) {
    for (const auto& number : numbers) {
        if (number < left) {
            cout << left;
        } else if (number > right) {
            cout << right;
        } else {
            cout << number;
        }
        cout << " ";
    }
    cout << endl;
}

int main() {
    while (cin >> N >> L >> R) {
        vector<size_t> numbers(N);
        for(auto& number : numbers) {
            cin >> number;
        }

        solve(numbers, L, R);
    }

    return 0;
}
