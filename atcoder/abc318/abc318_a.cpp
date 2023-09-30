#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M, P;
    while (cin >> N >> M >> P) {
        if (N < M) {
            cout << 0 << endl;
        } else {
            cout << ((N - M) / P + 1) << endl;
        }
    };

    return 0;
}
