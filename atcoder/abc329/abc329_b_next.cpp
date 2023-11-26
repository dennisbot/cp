#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <memory>
#define db(a) cout << #a << " = " << a << endl;
#define db2(a, b) cout << #a << " = " << a << " " << #b << " = " << b << endl;
#define db3(a, b, c) cout << #a << " = " << a << " " << #b << " = " << b << " " << #c << " = " << c << endl;
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

size_t N;

auto solve(const vector<int>& numbers, const int& curmax) {
    auto secondmax = numeric_limits<int>::min();
    for (const auto& number : *numbers) {
        if (secondmax < number && number != curmax) {
            secondmax = number;
        }
    }

    return secondmax;
}

int main() {
    while (cin >> N) {
        vector<int> numbers(N);
        int curmax = numeric_limits<int>::min();
        for(auto& number : numbers) {
            cin >> number;
            if (number > curmax) {
                curmax = number;
            }
        }

        cout << solve(numbers, curmax) << endl;
    }

    return 0;
}
