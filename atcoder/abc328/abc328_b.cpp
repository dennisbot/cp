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

size_t N;

void store_digits(set<size_t>& myset, size_t number) {
    while (number > 0) {
        myset.insert(number % 10);
        number /= 10;
    }
}

bool have_same_digits(size_t day, size_t month) {
    set<size_t> myset;
    store_digits(myset, day);
    store_digits(myset, month);
    return myset.size() == 1;
}

size_t solve(const vector<size_t>& days) {
    size_t ans = 0;
    for (size_t m = 1; m <= 9; m++) {
        size_t month = 0;
        for (size_t tm = 0; tm < 2; tm++) {
            month += m * pow(10, tm);
            for (size_t d = 1; d <= 9; d++) {
                size_t day = 0;
                for (size_t td = 0; td < 2; td++) {
                    day += d * pow(10, td);
                    if (month <= N && day <= days[month - 1] && have_same_digits(day, month)) {
                        ans++;
                    }
                }
            }
        }
    }

    return ans;
}

int main() {
    while (cin >> N) {
        vector<size_t> days(N);
        for (size_t i = 0; i < N; i++) {
            cin >> days[i];
        }

        cout << solve(days) << endl;
    }

    return 0;
}
