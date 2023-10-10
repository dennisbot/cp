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

using namespace std;

int main() {
    string S;
    while (cin >> S) {
        bool ok = true;
        for (size_t i = 1; i < S.size(); i += 2) {
            ok = ok && S[i] == '0';
        }

        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}
