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

bool is_palindrome(const string& str) {
    int len = str.size();
    int mid = len / 2;
    for (int i = 0; i < mid; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }

    return true;
}

int solve(string str) {
    string candidate;
    int longest = numeric_limits<int>::min();
    for (size_t i = 0; i < str.size(); i++) {
        for (size_t j = i; j < str.size(); j++) {
            candidate = str.substr(i, j - i + 1);
            if (is_palindrome(candidate)) {
                longest = max((int)candidate.size(), longest);
            }
        }
    }

    return longest;
}

int main() {
    string S;
    while (cin >> S) {
        cout << solve(S) << endl;
    }

    return 0;
}
