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
    size_t m;
    string s1, s2, s3;
    while (cin >> m >> s1 >> s2 >> s3) {
        int least_time = 300;
        size_t m3 = 3 * m;
        for (size_t i = 0; i < m3; i++) {
            for (size_t j = 0; j < m3; j++) {
                for (size_t k = 0; k < m3; k++) {
                    if (i != j && j != k && i != k &&
                        s1[i % m] == s2[j % m] &&
                        s2[j % m] == s3[k % m]) {
                        int max_index = max(max(i, j), k);
                        least_time = min(max_index, least_time);
                    }
                }
            }
        }

        if (least_time == 300) {
            cout << -1 << endl;
        } else {
            cout << least_time << endl;
        }
    }

    return 0;
}
