#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int read, tmin = 1e9, tmax = 0;
        vector<int> A(1001);
        for (int i = 0; i < N; i++) {
            cin >> read;
            A[read] = 1;
            tmin = min(tmin, read);
            tmax = max(tmax, read);
        }

        for (int i = tmin; i <= tmax; i++) {
            if (A[i] == 0) {
                cout << i << endl;
            }
        }
    }

    return 0;
}
