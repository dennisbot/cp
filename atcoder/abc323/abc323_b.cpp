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
#define list(a)                                                                         \
    cout << #a << endl;                                                                 \
    for (size_t i = 0; i < (a).size(); ++i) cout << "[" << i << "]:" << (a)[i] << endl; \
    cout << endl;

using namespace std;

size_t N;

struct Player {
    size_t rank;
    size_t wins;

    Player(size_t rank, size_t wins) : rank(rank), wins(wins) {}
};

std::ostream& operator<<(std::ostream& os, const Player& p) {
    os << "{Rank: " << p.rank << ", Wins: " << p.wins << "}";
    return os;
}

void solve(vector<Player>& players) {
    sort(players.begin(), players.end(),
         [](const Player& a, const Player& b) {
             return a.wins > b.wins || (a.wins == b.wins && a.rank < b.rank);
         });
}

int main() {
    while (cin >> N) {
        vector<string> ss(N);
        vector<Player> players;
        for (size_t i = 0; i < N; i++) {
            cin >> ss[i];
            players.emplace_back(i + 1, count(ss[i].begin(), ss[i].end(), 'o'));
        }

        solve(players);

        for (const auto& player : players) {
            cout << player.rank << " ";
        }

        cout << endl;
    }

    return 0;
}
