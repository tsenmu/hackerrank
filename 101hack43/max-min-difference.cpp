#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        nums.push_back(v);
    }
    sort(nums.begin(), nums.end());
    cout << min(nums[n - 1] - nums[1], nums[n - 2] - nums[0]) << endl;
    return 0;
}