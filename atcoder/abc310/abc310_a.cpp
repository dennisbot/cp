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

int solve(const vector<int>& dishes, int current_price, int price_with_coupon) {
    auto min_dish_price = *min_element(dishes.begin(), dishes.end());
    return min(current_price, min_dish_price + price_with_coupon);
}

int main() {
    size_t N, P, Q;
    while (cin >> N >> P >> Q) {
        vector<int> dishes(N);
        for (auto& dish : dishes) {
            cin >> dish;
        }

        cout << solve(dishes, P, Q) << endl;
    }

    return 0;
}
