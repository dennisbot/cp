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
    int N;
    string S;
    while (cin >> N >> S) {
        int position = S.find("ABC");
        if (position != -1) {
            cout << position + 1 << endl;
        } else {
            cout << position << endl;
        }
    }

    return 0;
}
