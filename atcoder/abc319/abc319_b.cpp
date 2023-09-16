#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> divisors;
        for (int j = 1; j < 10; j++) {
            if (N % j == 0) {
                divisors.push_back(N / j);
            }
        }
        for (int i = 0; i < N + 1; i++) {
            bool found = false;
            for(const auto& divisor : divisors) {
                if (i % divisor == 0) {
                    cout << N / divisor; 
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}
