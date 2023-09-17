#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<int> order(9), cells(9);
    iota(order.begin(), order.end(), 0);
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    vector<tuple<int, int, int>> rows = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6},
    };

    for (auto& cell : cells) {
        cin >> cell;
    }

    int non_disappointing = 0;

    do {
        bool disappointing = false;
        for (const auto& [a, b, c] : rows) {
            if ((cells[a] == cells[b] && order[a] < order[c] && order[b] < order[c]) ||
                (cells[a] == cells[c] && order[a] < order[b] && order[c] < order[b]) ||
                (cells[b] == cells[c] && order[b] < order[a] && order[c] < order[a])) {
                disappointing = true;
            }

            if (disappointing) break;
        }

        if (!disappointing) {
            non_disappointing++;
        }
    } while (next_permutation(order.begin(), order.end()));

    cout << setprecision(10);
    cout << non_disappointing * 1. / 362880 << endl;
    return 0;
}
