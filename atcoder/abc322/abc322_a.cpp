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

ll solve(const string& str) {
    ll ans = str.find("ABC");
    return ans != -1 ? ans + 1 : -1;
}

int main() {
    string S; size_t N;
    while (cin >> N >> S) {
        cout << solve(S) << endl;
    }

    return 0;
}
