#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N, H, X, potion;
    bool found = false;
    cin >> N >> H >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> potion;
        if (H + potion >= X && !found) {
            cout << i + 1 << endl;
            found = true;
        }
    }

    return 0;
}
