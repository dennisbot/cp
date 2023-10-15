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
#define dbv(a)                                                                        \
    cout << #a << " = ";                                                              \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << ":" << (a)[i] << "]"; \
    cout << endl;

using namespace std;

string S;

bool is_palindrome(const string& chunk) {
    size_t len = chunk.size();
    size_t mid = len / 2;
    for (size_t i = 0; i < mid; i++) {
        if (chunk[i] != chunk[len - i - 1]) {
            return false;
        }
    }

    return true;
}

size_t solve() {
    size_t best = 1;
    for (size_t i = 0; i < S.size(); i++) {
        for (size_t j = i + 1; j < S.size(); j++) {
            string chunk = S.substr(i, j - i + 1);
            if (is_palindrome(chunk)) {
                best = max(chunk.size(), best);
            }
        }
    }
    
    return best;
}

int main() {
    while (cin >> S) {
        cout << solve() << endl;
    }

    return 0;
}
