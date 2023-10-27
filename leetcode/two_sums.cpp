#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <cmath>
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

int target;
size_t num;
string target_line;
string input_line;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    int complement = 0;
    for (int i = 0; i < (int)nums.size(); i++) {
        complement = target - nums[i];
        if (m.find(complement) != m.end()) {
            return {m[complement], i};
        }

        m[nums[i]] = i;
    }

    return {};
}

int main() {
    while (getline(cin, target_line)) {
        vector<int> nums;
        target = stoi(target_line);
        getline(cin, input_line);
        db2(target, input_line);
        istringstream iss(input_line);
        while (iss >> num) nums.push_back(num);
        
        list(twoSum(nums, target));
    }

    return 0;
}
