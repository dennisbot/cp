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

long long int solve(const vector<long long int>& numbers, const long long int& curmax) {
    long long int secondmax = -1 * (1 << 30);
    for (size_t i = 0; i < N; i++) {
        if (secondmax < numbers[i] && numbers[i] != curmax) {
            secondmax = numbers[i];
        }
    }

    return secondmax;
}

int main() {
    while (cin >> N) {
        vector<long long int> numbers(N);
        long long int curmax = -1 * (1 << 30);
        for (size_t i = 0; i < N; i++) {
            cin >> numbers[i];
            if (numbers[i] > curmax) {
                curmax = numbers[i];
            }
        }

        cout << solve(numbers, curmax) << endl;
    }

    return 0;
}
