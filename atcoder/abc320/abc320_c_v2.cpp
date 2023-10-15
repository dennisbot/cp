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
#define dbv(a)                                                                         \
    cout << #a << " = ";                                                               \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << ":" << (a)[i] << "] "; \
    cout << endl;

using namespace std;

vector<size_t> sequences(3);
string digits = "0123456789";
size_t m;
vector<string> s(3);

void getInput() {
    for (size_t i = 0; i < 3; i++) {
        cin >> s[i];
        s[i] += s[i];
    }
}

bool digitExists(const vector<string>& s, char digit) {
    for (size_t i = 0; i < 3; i++) {
        if (find(s[i].begin(), s[i].end(), digit) == s[i].end()) {
            return false;
        }
    }

    return true;
}

int solve() {
    int ans = 1 << 30;
    do {
        for (size_t digit = 0; digit < 10; digit++) {
            if (!digitExists(s, digits[digit])) continue;

            int acc = 0;
            for (size_t i = 0; i < 3; i++) {
                acc += s[sequences[i]].substr(acc % m).find(digits[digit]) + 1;
            }

            ans = min(ans, acc - 1);
        }
    } while (next_permutation(sequences.begin(), sequences.end()));

    if (ans == (1 << 30)) {
        return -1;
    }

    return ans;
}

int main() {
    iota(sequences.begin(), sequences.end(), 0);

    while (cin >> m) {
        getInput();
        cout << solve() << endl;
    }

    return 0;
}
