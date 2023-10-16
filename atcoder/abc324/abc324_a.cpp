#include <algorithm>
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

int main() {
    while (cin >> N) {
        vector<size_t> numbers(N);
        bool ok = true;
        for (size_t i = 0; i < N; i++) {
            cin >> numbers[i];
            if (i > 0) {
                if (numbers[i] != numbers[i - 1]) {
                    ok = false;
                }
            }
        }

        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}
