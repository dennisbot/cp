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
typedef long long ll;
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

ll solve(const vector<vector<size_t>>& matrix) {
    ll area = 0;
    for (size_t i = 0; i < 100; i++) {
        for (size_t j = 0; j < 100; j++) {
            area += matrix[i][j];
        }
    }

    return area;
}

int main() {
    size_t N, A, B, C, D;
    while (cin >> N) {
        vector<vector<size_t>> matrix(100, vector<size_t>(100, 0));
        while (N--) {
            cin >> A >> B >> C >> D;
            for (size_t i = A; i < B; i++) {
                for (size_t j = C; j < D; j++) {
                    matrix[i][j] = 1;
                }
            }
        }
        
        cout << solve(matrix) << endl;
    }

    return 0;
}
