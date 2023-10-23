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

size_t solve(const vector<size_t>& numWorkers, const vector<size_t>& local_time) {
    size_t best = 0, current_time;
    for (size_t hour = 0; hour < 24; hour++) {
        size_t sum = 0;
        for (size_t i = 0; i < N; i++) {
            current_time = (hour + local_time[i]) % 24;
            if (current_time >= 9 && current_time < 18) {
                sum += numWorkers[i];
            }
        }

        best = max(best, sum);
    }

    return best;
}

int main() {
    while (cin >> N) {
        vector<size_t> numWorkers(N), local_time(N);
        for (size_t i = 0; i < N; i++) {
            cin >> numWorkers[i] >> local_time[i];
        }

        cout << solve(numWorkers, local_time) << endl;
    }

    return 0;
}
